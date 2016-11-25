// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "Logger.h"

void Logger::WriteStringToFile(FString logText)
{
	logText += "\n"; // add new line after log message
	FString path = FString(FPaths::GameDir() + "/logbatterycollector.log");
	FFileHelper::SaveStringToFile(logText, *path, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}
