/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingScreenSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreenSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TinkerLoadingScreen.LoadingScreenSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008000D0
	 * 		Name   -> Function TinkerLoadingScreen.LoadingScreenWidgetInterface.SetLoadingScreenDescription
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FLoadingScreenDescription                   Description                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenWidgetInterface::SetLoadingScreenDescription(const struct FLoadingScreenDescription& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerLoadingScreen.LoadingScreenWidgetInterface.SetLoadingScreenDescription");
		
		ULoadingScreenWidgetInterface_SetLoadingScreenDescription_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007FFFB0
	 * 		Name   -> Function TinkerLoadingScreen.LoadingScreenWidgetInterface.SetLevelLoadData
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FLoadScreenLevelData                        LevelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenWidgetInterface::SetLevelLoadData(const struct FLoadScreenLevelData& LevelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerLoadingScreen.LoadingScreenWidgetInterface.SetLevelLoadData");
		
		ULoadingScreenWidgetInterface_SetLevelLoadData_Params params {};
		params.LevelData = LevelData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingScreenWidgetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreenWidgetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TinkerLoadingScreen.LoadingScreenWidgetInterface");
		return ptr;
	}

}


