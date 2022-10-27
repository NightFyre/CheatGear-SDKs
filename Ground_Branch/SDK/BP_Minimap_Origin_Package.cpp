/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_Minimap_Origin.BP_Minimap_Origin_C.Get2dPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SourceLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWantSideView                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   OutCanvasPosition                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Minimap_Origin_C::Get2dPosition(const struct FVector& SourceLocation, bool bWantSideView, struct FVector2D* OutCanvasPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Minimap_Origin.BP_Minimap_Origin_C.Get2dPosition");
		
		ABP_Minimap_Origin_C_Get2dPosition_Params params {};
		params.SourceLocation = SourceLocation;
		params.bWantSideView = bWantSideView;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCanvasPosition != nullptr)
			*OutCanvasPosition = params.OutCanvasPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Minimap_Origin.BP_Minimap_Origin_C.SaveImageToDisk
	 * 		Flags  -> ()
	 */
	void ABP_Minimap_Origin_C::SaveImageToDisk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Minimap_Origin.BP_Minimap_Origin_C.SaveImageToDisk");
		
		ABP_Minimap_Origin_C_SaveImageToDisk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Minimap_Origin.BP_Minimap_Origin_C.SetupCaptureComp
	 * 		Flags  -> ()
	 */
	void ABP_Minimap_Origin_C::SetupCaptureComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Minimap_Origin.BP_Minimap_Origin_C.SetupCaptureComp");
		
		ABP_Minimap_Origin_C_SetupCaptureComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Minimap_Origin.BP_Minimap_Origin_C.Setup
	 * 		Flags  -> ()
	 */
	void ABP_Minimap_Origin_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Minimap_Origin.BP_Minimap_Origin_C.Setup");
		
		ABP_Minimap_Origin_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Minimap_Origin.BP_Minimap_Origin_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Minimap_Origin_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Minimap_Origin.BP_Minimap_Origin_C.UserConstructionScript");
		
		ABP_Minimap_Origin_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Minimap_Origin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Minimap_Origin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Minimap_Origin.BP_Minimap_Origin_C");
		return ptr;
	}

}


