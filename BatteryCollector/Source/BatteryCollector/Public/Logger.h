// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#define LOG_FILE_NAME "logbatterycollector.log"

/**
 * 
 */
class BATTERYCOLLECTOR_API Logger
{
public:
	static void WriteStringToFile(FString logText);
	static void DeleteLog();
	static void WriteLocationToFile(FVector position);

private:
	Logger() {};
	~Logger() {};

	static FString GetPath();
};
