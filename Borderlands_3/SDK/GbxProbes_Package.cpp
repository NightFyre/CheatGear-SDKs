/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0068C010
	 * 		Name   -> Function GbxProbes.GbxProbesBlueprintLibrary.ResolveGbxProbeId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     InObj                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                InTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxProbeId                                 OutId                                                      (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProbesBlueprintLibrary::STATIC_ResolveGbxProbeId(class UObject* InObj, const struct FGameplayTag& InTag, struct FGbxProbeId* OutId, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.ResolveGbxProbeId");
		
		UGbxProbesBlueprintLibrary_ResolveGbxProbeId_Params params {};
		params.InObj = InObj;
		params.InTag = InTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutId != nullptr)
			*OutId = params.OutId;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0068BDC0
	 * 		Name   -> Function GbxProbes.GbxProbesBlueprintLibrary.MakeProbeId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Class                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SubType                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxProbeId                                 OutId                                                      (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProbesBlueprintLibrary::STATIC_MakeProbeId(const class FString& Class, const class FString& Type, const class FString& SubType, struct FGbxProbeId* OutId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.MakeProbeId");
		
		UGbxProbesBlueprintLibrary_MakeProbeId_Params params {};
		params.Class = Class;
		params.Type = Type;
		params.SubType = SubType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutId != nullptr)
			*OutId = params.OutId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0068BCD0
	 * 		Name   -> Function GbxProbes.GbxProbesBlueprintLibrary.IsValidId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGbxProbeId                                 ProbeId                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProbesBlueprintLibrary::STATIC_IsValidId(const struct FGbxProbeId& ProbeId, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.IsValidId");
		
		UGbxProbesBlueprintLibrary_IsValidId_Params params {};
		params.ProbeId = ProbeId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0068BBA0
	 * 		Name   -> Function GbxProbes.GbxProbesBlueprintLibrary.IsTestProbeEnabled
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGbxProbeId                                 ProbeId                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Test                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsEnabled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProbesBlueprintLibrary::STATIC_IsTestProbeEnabled(const struct FGbxProbeId& ProbeId, const class FName& Test, bool* IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.IsTestProbeEnabled");
		
		UGbxProbesBlueprintLibrary_IsTestProbeEnabled_Params params {};
		params.ProbeId = ProbeId;
		params.Test = Test;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnabled != nullptr)
			*IsEnabled = params.IsEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0068BAE0
	 * 		Name   -> Function GbxProbes.GbxProbesBlueprintLibrary.IsTestEnabled
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Test                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsEnabled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProbesBlueprintLibrary::STATIC_IsTestEnabled(const class FName& Test, bool* IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.IsTestEnabled");
		
		UGbxProbesBlueprintLibrary_IsTestEnabled_Params params {};
		params.Test = Test;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnabled != nullptr)
			*IsEnabled = params.IsEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0068BA20
	 * 		Name   -> Function GbxProbes.GbxProbesBlueprintLibrary.IsClassEnabled
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsEnabled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProbesBlueprintLibrary::STATIC_IsClassEnabled(const class FName& Class, bool* IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.IsClassEnabled");
		
		UGbxProbesBlueprintLibrary_IsClassEnabled_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnabled != nullptr)
			*IsEnabled = params.IsEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0068BA00
	 * 		Name   -> Function GbxProbes.GbxProbesBlueprintLibrary.FlushPendingTestProbes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UGbxProbesBlueprintLibrary::STATIC_FlushPendingTestProbes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.FlushPendingTestProbes");
		
		UGbxProbesBlueprintLibrary_FlushPendingTestProbes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0068B860
	 * 		Name   -> Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResultWithData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxProbeId                                 ProbeId                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Test                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxProbeResult                                    Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGbxProbeExtraData>                  ExtraDataArray                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxProbesBlueprintLibrary::STATIC_EmitTestProbeResultWithData(const struct FGbxProbeId& ProbeId, const class FName& Test, EGbxProbeResult Result, TArray<struct FGbxProbeExtraData> ExtraDataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResultWithData");
		
		UGbxProbesBlueprintLibrary_EmitTestProbeResultWithData_Params params {};
		params.ProbeId = ProbeId;
		params.Test = Test;
		params.Result = Result;
		params.ExtraDataArray = ExtraDataArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0068B6C0
	 * 		Name   -> Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResult
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxProbeId                                 ProbeId                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Test                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxProbeResult                                    Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtraData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProbesBlueprintLibrary::STATIC_EmitTestProbeResult(const struct FGbxProbeId& ProbeId, const class FName& Test, EGbxProbeResult Result, const class FString& ExtraData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResult");
		
		UGbxProbesBlueprintLibrary_EmitTestProbeResult_Params params {};
		params.ProbeId = ProbeId;
		params.Test = Test;
		params.Result = Result;
		params.ExtraData = ExtraData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxProbesBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxProbesBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxProbes.GbxProbesBlueprintLibrary");
		return ptr;
	}

}


