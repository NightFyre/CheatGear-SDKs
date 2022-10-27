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
	 * 		RVA    -> 0x02E9CE60
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FK2TelemetryValues                          StatArray                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetTelemetryValue                                 Opt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryVector(struct FK2TelemetryValues* StatArray, const class FString& Key, const struct FVector& Value, ESetTelemetryValue Opt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryVector");
		
		UGbxTelemetryBlueprintLibrary_SetNamedTelemetryVector_Params params {};
		params.Key = Key;
		params.Value = Value;
		params.Opt = Opt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatArray != nullptr)
			*StatArray = params.StatArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9CC90
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FK2TelemetryValues                          StatArray                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetTelemetryValue                                 Opt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryString(struct FK2TelemetryValues* StatArray, const class FString& Key, const class FString& Value, ESetTelemetryValue Opt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryString");
		
		UGbxTelemetryBlueprintLibrary_SetNamedTelemetryString_Params params {};
		params.Key = Key;
		params.Value = Value;
		params.Opt = Opt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatArray != nullptr)
			*StatArray = params.StatArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9CAC0
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FK2TelemetryValues                          StatArray                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESetTelemetryValue                                 Opt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryRotator(struct FK2TelemetryValues* StatArray, const class FString& Key, const struct FRotator& Value, ESetTelemetryValue Opt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryRotator");
		
		UGbxTelemetryBlueprintLibrary_SetNamedTelemetryRotator_Params params {};
		params.Key = Key;
		params.Value = Value;
		params.Opt = Opt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatArray != nullptr)
			*StatArray = params.StatArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9C900
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryInt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FK2TelemetryValues                          StatArray                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetTelemetryValue                                 Opt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryInt(struct FK2TelemetryValues* StatArray, const class FString& Key, int32_t Value, ESetTelemetryValue Opt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryInt");
		
		UGbxTelemetryBlueprintLibrary_SetNamedTelemetryInt_Params params {};
		params.Key = Key;
		params.Value = Value;
		params.Opt = Opt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatArray != nullptr)
			*StatArray = params.StatArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9C740
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FK2TelemetryValues                          StatArray                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetTelemetryValue                                 Opt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryFloat(struct FK2TelemetryValues* StatArray, const class FString& Key, float Value, ESetTelemetryValue Opt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryFloat");
		
		UGbxTelemetryBlueprintLibrary_SetNamedTelemetryFloat_Params params {};
		params.Key = Key;
		params.Value = Value;
		params.Opt = Opt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatArray != nullptr)
			*StatArray = params.StatArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9C580
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryByte
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FK2TelemetryValues                          StatArray                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetTelemetryValue                                 Opt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryByte(struct FK2TelemetryValues* StatArray, const class FString& Key, unsigned char Value, ESetTelemetryValue Opt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryByte");
		
		UGbxTelemetryBlueprintLibrary_SetNamedTelemetryByte_Params params {};
		params.Key = Key;
		params.Value = Value;
		params.Opt = Opt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatArray != nullptr)
			*StatArray = params.StatArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9C3C0
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryBool
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FK2TelemetryValues                          StatArray                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetTelemetryValue                                 Opt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FK2TelemetryValues UGbxTelemetryBlueprintLibrary::STATIC_SetNamedTelemetryBool(struct FK2TelemetryValues* StatArray, const class FString& Key, bool Value, ESetTelemetryValue Opt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryBool");
		
		UGbxTelemetryBlueprintLibrary_SetNamedTelemetryBool_Params params {};
		params.Key = Key;
		params.Value = Value;
		params.Opt = Opt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatArray != nullptr)
			*StatArray = params.StatArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9C2E0
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.MakeTelemetryEventRef
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FK2EventRef UGbxTelemetryBlueprintLibrary::STATIC_MakeTelemetryEventRef(const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.MakeTelemetryEventRef");
		
		UGbxTelemetryBlueprintLibrary_MakeTelemetryEventRef_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9C230
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.IsValid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FK2EventRef                                 EventRef                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UGbxTelemetryBlueprintLibrary::STATIC_IsValid(const struct FK2EventRef& EventRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.IsValid");
		
		UGbxTelemetryBlueprintLibrary_IsValid_Params params {};
		params.EventRef = EventRef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9C020
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryValues
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventContext                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FK2TelemetryValues                          Values                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Guid                                                       (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRunOnClient                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxTelemetryBlueprintLibrary::STATIC_EmitTelemetryValues(const class FString& EventContext, const struct FK2TelemetryValues& Values, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryValues");
		
		UGbxTelemetryBlueprintLibrary_EmitTelemetryValues_Params params {};
		params.EventContext = EventContext;
		params.Values = Values;
		params.WorldContextObject = WorldContextObject;
		params.Guid = Guid;
		params.bRunOnClient = bRunOnClient;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9BDA0
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FK2EventRef                                 Event                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventContext                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     EventContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     EventInstigatorObject                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Guid                                                       (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRunOnClient                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxTelemetryBlueprintLibrary::STATIC_EmitTelemetryEvent(const struct FK2EventRef& Event, const class FString& EventContext, class UObject* EventContextObject, class UObject* EventInstigatorObject, class UObject* WorldContextObject, const struct FGuid& Guid, bool bRunOnClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryEvent");
		
		UGbxTelemetryBlueprintLibrary_EmitTelemetryEvent_Params params {};
		params.Event = Event;
		params.EventContext = EventContext;
		params.EventContextObject = EventContextObject;
		params.EventInstigatorObject = EventInstigatorObject;
		params.WorldContextObject = WorldContextObject;
		params.Guid = Guid;
		params.bRunOnClient = bRunOnClient;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E9BC70
	 * 		Name   -> Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.DefineTelemetryEventRef
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TableDesc                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FK2EventRef UGbxTelemetryBlueprintLibrary::STATIC_DefineTelemetryEventRef(const class FString& EventName, const class FString& TableDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.DefineTelemetryEventRef");
		
		UGbxTelemetryBlueprintLibrary_DefineTelemetryEventRef_Params params {};
		params.EventName = EventName;
		params.TableDesc = TableDesc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTelemetryBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTelemetryBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxPerfAnalytics.GbxTelemetryBlueprintLibrary");
		return ptr;
	}

}


