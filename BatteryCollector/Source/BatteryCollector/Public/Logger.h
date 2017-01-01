// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class BATTERYCOLLECTOR_API Logger
{
public:
	static void WriteStringToFile(FString logText, FString filename);
	static void DeleteLog(FString filename);
	static void WriteLocationToFile(FVector position, FString filename);

private:
	Logger() {};
	~Logger() {};

	static FString GetPath(FString filename);
};
