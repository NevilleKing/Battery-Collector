// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "Logger.h"

void Logger::WriteStringToFile(FString logText, FString filename)
{
	logText += "\n"; // add new line after log message
	FString path = GetPath(filename);
	FFileHelper::SaveStringToFile(logText, *path, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

void Logger::DeleteLog(FString filename)
{
	FString path = GetPath(filename);
	if (FPaths::FileExists(path))
	{
		FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*path);
	}
}

void Logger::WriteLocationToFile(FVector position, FString filename)
{
	WriteStringToFile(FString::SanitizeFloat(position.X) + "," + FString::SanitizeFloat(position.Y) + "," + FString::SanitizeFloat(position.Z), filename);
}

FString Logger::GetPath(FString filename)
{
	return FString(FPaths::GameDir() + "/" + filename);
}
