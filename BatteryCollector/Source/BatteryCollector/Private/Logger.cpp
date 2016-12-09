// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "Logger.h"

void Logger::WriteStringToFile(FString logText)
{
	logText += "\n"; // add new line after log message
	FString path = GetPath();
	FFileHelper::SaveStringToFile(logText, *path, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

void Logger::DeleteLog()
{
	FString path = GetPath();
	if (FPaths::FileExists(path))
	{
		FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*path);
	}
}

void Logger::WriteLocationToFile(FVector position)
{
	WriteStringToFile(FString::SanitizeFloat(position.X) + "," + FString::SanitizeFloat(position.Y) + "," + FString::SanitizeFloat(position.Z));
}

FString Logger::GetPath()
{
	return FString(FPaths::GameDir() + "/" + LOG_FILE_NAME);
}
