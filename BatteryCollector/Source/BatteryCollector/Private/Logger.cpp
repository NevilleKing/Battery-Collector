// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "Logger.h"

void Logger::WriteStringToFile(FString logText)
{
	FString path = FString(FPaths::GameDir() + "/logbatterycollector.txt");
	FFileHelper::SaveStringToFile(logText, *path);
}
