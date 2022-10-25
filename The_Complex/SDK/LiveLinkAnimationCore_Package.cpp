/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x03DDAAE0
	 * 		Name   -> Function LiveLinkAnimationCore.LiveLinkInstance.SetSubject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectName                        SubjectName                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkInstance::SetSubject(const struct FLiveLinkSubjectName& SubjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLinkAnimationCore.LiveLinkInstance.SetSubject");
		
		ULiveLinkInstance_SetSubject_Params params {};
		params.SubjectName = SubjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDA9E0
	 * 		Name   -> Function LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      RetargetAsset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkInstance::SetRetargetAsset(class UClass* RetargetAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset");
		
		ULiveLinkInstance_SetRetargetAsset_Params params {};
		params.RetargetAsset = RetargetAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkAnimationCore.LiveLinkInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkRetargetAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkRetargetAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkAnimationCore.LiveLinkRetargetAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDA8A0
	 * 		Name   -> Function LiveLinkAnimationCore.LiveLinkRemapAsset.RemapCurveElements
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		TMap<class FName, float>                           CurveItems                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkRemapAsset::RemapCurveElements(TMap<class FName, float>* CurveItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLinkAnimationCore.LiveLinkRemapAsset.RemapCurveElements");
		
		ULiveLinkRemapAsset_RemapCurveElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurveItems != nullptr)
			*CurveItems = params.CurveItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDA800
	 * 		Name   -> Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedCurveName
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        CurveName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULiveLinkRemapAsset::GetRemappedCurveName(const class FName& CurveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedCurveName");
		
		ULiveLinkRemapAsset_GetRemappedCurveName_Params params {};
		params.CurveName = CurveName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DDA760
	 * 		Name   -> Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedBoneName
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULiveLinkRemapAsset::GetRemappedBoneName(const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedBoneName");
		
		ULiveLinkRemapAsset_GetRemappedBoneName_Params params {};
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkRemapAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkRemapAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLinkAnimationCore.LiveLinkRemapAsset");
		return ptr;
	}

}


