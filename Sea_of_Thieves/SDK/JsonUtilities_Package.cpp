/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0233A4A0
	 * 		Name   -> Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGenericStruct                              Struct                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OutJsonString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UJsonUtilitiesBlueprintHelperLibrary::STATIC_UStructToJsonObjectString(const struct FGenericStruct& Struct, class FString* OutJsonString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString");
		
		UJsonUtilitiesBlueprintHelperLibrary_UStructToJsonObjectString_Params params {};
		params.Struct = Struct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutJsonString != nullptr)
			*OutJsonString = params.OutJsonString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0233A350
	 * 		Name   -> Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InJsonString                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FGenericStruct                              Struct                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool UJsonUtilitiesBlueprintHelperLibrary::STATIC_JsonObjectStringToUStruct(const class FString& InJsonString, const struct FGenericStruct& Struct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct");
		
		UJsonUtilitiesBlueprintHelperLibrary_JsonObjectStringToUStruct_Params params {};
		params.InJsonString = InJsonString;
		params.Struct = Struct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJsonUtilitiesBlueprintHelperLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJsonUtilitiesBlueprintHelperLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class JsonUtilities.JsonUtilitiesBlueprintHelperLibrary");
		return ptr;
	}

}


