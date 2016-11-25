// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class BATTERYCOLLECTOR_API Logger
{
public:
	static void WriteStringToFile(FString logText);

private:
	Logger() {};
	~Logger() {};
};
