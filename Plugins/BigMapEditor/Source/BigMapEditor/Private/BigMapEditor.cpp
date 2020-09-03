// Copyright Epic Games, Inc. All Rights Reserved.

#include "BigMapEditor.h"

#define LOCTEXT_NAMESPACE "FBigMapEditorModule"

void FBigMapEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FBigMapEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBigMapEditorModule, BigMapEditor)