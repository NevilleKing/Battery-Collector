// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "Logger.h"

void Logger::WriteStringToFile()
{
	FString stringToSave = FString("TestString");
	FString path = FString("./logbatterycollector.txt");
	FFileHelper::SaveStringToFile(stringToSave, *path);
}

Logger::Logger()
{
}

Logger::~Logger()
{
}
