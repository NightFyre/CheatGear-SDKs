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
	 * 		Name   -> Function VaRest.VaRestJsonObject.WriteToFilePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsRelativeToProjectDir                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestJsonObject::WriteToFilePath(const class FString& Path, bool bIsRelativeToProjectDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.WriteToFilePath");
		
		UVaRestJsonObject_WriteToFilePath_Params params {};
		params.Path = Path;
		params.bIsRelativeToProjectDir = bIsRelativeToProjectDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetStringField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetStringField(const class FString& FieldName, const class FString& StringValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetStringField");
		
		UVaRestJsonObject_SetStringField_Params params {};
		params.FieldName = FieldName;
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetStringArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              StringArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetStringArrayField(const class FString& FieldName, TArray<class FString> StringArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetStringArrayField");
		
		UVaRestJsonObject_SetStringArrayField_Params params {};
		params.FieldName = FieldName;
		params.StringArray = StringArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetObjectField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetObjectField");
		
		UVaRestJsonObject_SetObjectField_Params params {};
		params.FieldName = FieldName;
		params.JsonObject = JsonObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetObjectArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UVaRestJsonObject*>                   ObjectArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetObjectArrayField(const class FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetObjectArrayField");
		
		UVaRestJsonObject_SetObjectArrayField_Params params {};
		params.FieldName = FieldName;
		params.ObjectArray = ObjectArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetNumberField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetNumberField(const class FString& FieldName, float Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetNumberField");
		
		UVaRestJsonObject_SetNumberField_Params params {};
		params.FieldName = FieldName;
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetNumberArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      NumberArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetNumberArrayField(const class FString& FieldName, TArray<float> NumberArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetNumberArrayField");
		
		UVaRestJsonObject_SetNumberArrayField_Params params {};
		params.FieldName = FieldName;
		params.NumberArray = NumberArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetMapFields_uint8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, unsigned char>                 Fields                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetMapFields_uint8(TMap<class FString, unsigned char> Fields)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetMapFields_uint8");
		
		UVaRestJsonObject_SetMapFields_uint8_Params params {};
		params.Fields = Fields;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetMapFields_string
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Fields                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetMapFields_string(TMap<class FString, class FString> Fields)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetMapFields_string");
		
		UVaRestJsonObject_SetMapFields_string_Params params {};
		params.Fields = Fields;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetMapFields_int64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, int64_t>                       Fields                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetMapFields_int64(TMap<class FString, int64_t> Fields)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetMapFields_int64");
		
		UVaRestJsonObject_SetMapFields_int64_Params params {};
		params.Fields = Fields;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetMapFields_int32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, int32_t>                       Fields                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetMapFields_int32(TMap<class FString, int32_t> Fields)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetMapFields_int32");
		
		UVaRestJsonObject_SetMapFields_int32_Params params {};
		params.Fields = Fields;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetMapFields_bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, bool>                          Fields                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetMapFields_bool(TMap<class FString, bool> Fields)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetMapFields_bool");
		
		UVaRestJsonObject_SetMapFields_bool_Params params {};
		params.Fields = Fields;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetIntegerField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetIntegerField(const class FString& FieldName, int32_t Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetIntegerField");
		
		UVaRestJsonObject_SetIntegerField_Params params {};
		params.FieldName = FieldName;
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetInt64Field
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetInt64Field(const class FString& FieldName, int64_t Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetInt64Field");
		
		UVaRestJsonObject_SetInt64Field_Params params {};
		params.FieldName = FieldName;
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVaRestJsonValue*                            JsonValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetField(const class FString& FieldName, class UVaRestJsonValue* JsonValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetField");
		
		UVaRestJsonObject_SetField_Params params {};
		params.FieldName = FieldName;
		params.JsonValue = JsonValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetBoolField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetBoolField(const class FString& FieldName, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetBoolField");
		
		UVaRestJsonObject_SetBoolField_Params params {};
		params.FieldName = FieldName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetBoolArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       BoolArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetBoolArrayField(const class FString& FieldName, TArray<bool> BoolArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetBoolArrayField");
		
		UVaRestJsonObject_SetBoolArrayField_Params params {};
		params.FieldName = FieldName;
		params.BoolArray = BoolArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.SetArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UVaRestJsonValue*>                    inArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetArrayField(const class FString& FieldName, TArray<class UVaRestJsonValue*> inArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.SetArrayField");
		
		UVaRestJsonObject_SetArrayField_Params params {};
		params.FieldName = FieldName;
		params.inArray = inArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.Reset
	 * 		Flags  -> ()
	 */
	void UVaRestJsonObject::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.Reset");
		
		UVaRestJsonObject_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.RemoveField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::RemoveField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.RemoveField");
		
		UVaRestJsonObject_RemoveField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.MergeJsonObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           InJsonObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Overwrite                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.MergeJsonObject");
		
		UVaRestJsonObject_MergeJsonObject_Params params {};
		params.InJsonObject = InJsonObject;
		params.Overwrite = Overwrite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.HasField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestJsonObject::HasField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.HasField");
		
		UVaRestJsonObject_HasField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetStringField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestJsonObject::GetStringField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetStringField");
		
		UVaRestJsonObject_GetStringField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetStringArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UVaRestJsonObject::GetStringArrayField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetStringArrayField");
		
		UVaRestJsonObject_GetStringArrayField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetObjectField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonObject* UVaRestJsonObject::GetObjectField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetObjectField");
		
		UVaRestJsonObject_GetObjectField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetObjectArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UVaRestJsonObject*> UVaRestJsonObject::GetObjectArrayField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetObjectArrayField");
		
		UVaRestJsonObject_GetObjectArrayField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetNumberField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVaRestJsonObject::GetNumberField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetNumberField");
		
		UVaRestJsonObject_GetNumberField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetNumberArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> UVaRestJsonObject::GetNumberArrayField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetNumberArrayField");
		
		UVaRestJsonObject_GetNumberArrayField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetIntegerField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVaRestJsonObject::GetIntegerField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetIntegerField");
		
		UVaRestJsonObject_GetIntegerField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetInt64Field
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UVaRestJsonObject::GetInt64Field(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetInt64Field");
		
		UVaRestJsonObject_GetInt64Field_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetFieldNames
	 * 		Flags  -> ()
	 */
	TArray<class FString> UVaRestJsonObject::GetFieldNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetFieldNames");
		
		UVaRestJsonObject_GetFieldNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestJsonObject::GetField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetField");
		
		UVaRestJsonObject_GetField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetBoolField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestJsonObject::GetBoolField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetBoolField");
		
		UVaRestJsonObject_GetBoolField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetBoolArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<bool> UVaRestJsonObject::GetBoolArrayField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetBoolArrayField");
		
		UVaRestJsonObject_GetBoolArrayField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.GetArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UVaRestJsonValue*> UVaRestJsonObject::GetArrayField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.GetArrayField");
		
		UVaRestJsonObject_GetArrayField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.EncodeJsonToSingleString
	 * 		Flags  -> ()
	 */
	class FString UVaRestJsonObject::EncodeJsonToSingleString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.EncodeJsonToSingleString");
		
		UVaRestJsonObject_EncodeJsonToSingleString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.EncodeJson
	 * 		Flags  -> ()
	 */
	class FString UVaRestJsonObject::EncodeJson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.EncodeJson");
		
		UVaRestJsonObject_EncodeJson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonObject.DecodeJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseIncrementalParser                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestJsonObject::DecodeJson(const class FString& JsonString, bool bUseIncrementalParser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonObject.DecodeJson");
		
		UVaRestJsonObject_DecodeJson_Params params {};
		params.JsonString = JsonString;
		params.bUseIncrementalParser = bUseIncrementalParser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVaRestJsonObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVaRestJsonObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VaRest.VaRestJsonObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.Reset
	 * 		Flags  -> ()
	 */
	void UVaRestJsonValue::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.Reset");
		
		UVaRestJsonValue_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.IsNull
	 * 		Flags  -> ()
	 */
	bool UVaRestJsonValue::IsNull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.IsNull");
		
		UVaRestJsonValue_IsNull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.GetTypeString
	 * 		Flags  -> ()
	 */
	class FString UVaRestJsonValue::GetTypeString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.GetTypeString");
		
		UVaRestJsonValue_GetTypeString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.GetType
	 * 		Flags  -> ()
	 */
	EVaJson UVaRestJsonValue::GetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.GetType");
		
		UVaRestJsonValue_GetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.AsString
	 * 		Flags  -> ()
	 */
	class FString UVaRestJsonValue::AsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsString");
		
		UVaRestJsonValue_AsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.AsObject
	 * 		Flags  -> ()
	 */
	class UVaRestJsonObject* UVaRestJsonValue::AsObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsObject");
		
		UVaRestJsonValue_AsObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.AsNumber
	 * 		Flags  -> ()
	 */
	float UVaRestJsonValue::AsNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsNumber");
		
		UVaRestJsonValue_AsNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.AsInt64
	 * 		Flags  -> ()
	 */
	int32_t UVaRestJsonValue::AsInt64()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsInt64");
		
		UVaRestJsonValue_AsInt64_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.AsInt32
	 * 		Flags  -> ()
	 */
	int32_t UVaRestJsonValue::AsInt32()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsInt32");
		
		UVaRestJsonValue_AsInt32_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.AsBool
	 * 		Flags  -> ()
	 */
	bool UVaRestJsonValue::AsBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsBool");
		
		UVaRestJsonValue_AsBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestJsonValue.AsArray
	 * 		Flags  -> ()
	 */
	TArray<class UVaRestJsonValue*> UVaRestJsonValue::AsArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestJsonValue.AsArray");
		
		UVaRestJsonValue_AsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVaRestJsonValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVaRestJsonValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VaRest.VaRestJsonValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.StringToSha1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringToHash                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestLibrary::StringToSha1(const class FString& StringToHash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.StringToSha1");
		
		UVaRestLibrary_StringToSha1_Params params {};
		params.StringToHash = StringToHash;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.StringToMd5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringToHash                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestLibrary::StringToMd5(const class FString& StringToHash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.StringToMd5");
		
		UVaRestLibrary_StringToMd5_Params params {};
		params.StringToHash = StringToHash;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.PercentEncode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestLibrary::PercentEncode(const class FString& Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.PercentEncode");
		
		UVaRestLibrary_PercentEncode_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.HTTPStatusIntToEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StatusCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EVaRestHttpStatusCode UVaRestLibrary::HTTPStatusIntToEnum(int32_t StatusCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.HTTPStatusIntToEnum");
		
		UVaRestLibrary_HTTPStatusIntToEnum_Params params {};
		params.StatusCode = StatusCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.GetWorldURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVaRestURL UVaRestLibrary::GetWorldURL(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.GetWorldURL");
		
		UVaRestLibrary_GetWorldURL_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.GetVaRestVersion
	 * 		Flags  -> ()
	 */
	class FString UVaRestLibrary::GetVaRestVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.GetVaRestVersion");
		
		UVaRestLibrary_GetVaRestVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.GetVaRestSettings
	 * 		Flags  -> ()
	 */
	class UVaRestSettings* UVaRestLibrary::GetVaRestSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.GetVaRestSettings");
		
		UVaRestLibrary_GetVaRestSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.Base64EncodeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Dest                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestLibrary::Base64EncodeData(TArray<unsigned char> Data, class FString* Dest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.Base64EncodeData");
		
		UVaRestLibrary_Base64EncodeData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dest != nullptr)
			*Dest = params.Dest;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.Base64Encode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestLibrary::Base64Encode(const class FString& Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.Base64Encode");
		
		UVaRestLibrary_Base64Encode_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.Base64DecodeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Dest                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UVaRestLibrary::Base64DecodeData(const class FString& Source, TArray<unsigned char>* Dest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.Base64DecodeData");
		
		UVaRestLibrary_Base64DecodeData_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dest != nullptr)
			*Dest = params.Dest;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestLibrary.Base64Decode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Dest                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestLibrary::Base64Decode(const class FString& Source, class FString* Dest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestLibrary.Base64Decode");
		
		UVaRestLibrary_Base64Decode_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dest != nullptr)
			*Dest = params.Dest;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVaRestLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVaRestLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VaRest.VaRestLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.SetVerb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVaRestRequestVerb                                 Verb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetVerb(EVaRestRequestVerb Verb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetVerb");
		
		UVaRestRequestJSON_SetVerb_Params params {};
		params.Verb = Verb;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.SetURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetURL");
		
		UVaRestRequestJSON_SetURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.SetStringRequestContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetStringRequestContent(const class FString& Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetStringRequestContent");
		
		UVaRestRequestJSON_SetStringRequestContent_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.SetResponseObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetResponseObject(class UVaRestJsonObject* JsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetResponseObject");
		
		UVaRestRequestJSON_SetResponseObject_Params params {};
		params.JsonObject = JsonObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.SetRequestObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetRequestObject(class UVaRestJsonObject* JsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetRequestObject");
		
		UVaRestRequestJSON_SetRequestObject_Params params {};
		params.JsonObject = JsonObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.SetHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HeaderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      HeaderValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetHeader(const class FString& HeaderName, const class FString& HeaderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetHeader");
		
		UVaRestRequestJSON_SetHeader_Params params {};
		params.HeaderName = HeaderName;
		params.HeaderValue = HeaderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.SetCustomVerb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Verb                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetCustomVerb(const class FString& Verb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetCustomVerb");
		
		UVaRestRequestJSON_SetCustomVerb_Params params {};
		params.Verb = Verb;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.SetContentType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVaRestRequestContentType                          ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetContentType(EVaRestRequestContentType ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetContentType");
		
		UVaRestRequestJSON_SetContentType_Params params {};
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.SetBinaryRequestContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Content                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetBinaryRequestContent(TArray<unsigned char> Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetBinaryRequestContent");
		
		UVaRestRequestJSON_SetBinaryRequestContent_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.SetBinaryContentType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ContentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetBinaryContentType(const class FString& ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.SetBinaryContentType");
		
		UVaRestRequestJSON_SetBinaryContentType_Params params {};
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.ResetResponseData
	 * 		Flags  -> ()
	 */
	void UVaRestRequestJSON::ResetResponseData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ResetResponseData");
		
		UVaRestRequestJSON_ResetResponseData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.ResetRequestData
	 * 		Flags  -> ()
	 */
	void UVaRestRequestJSON::ResetRequestData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ResetRequestData");
		
		UVaRestRequestJSON_ResetRequestData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.ResetData
	 * 		Flags  -> ()
	 */
	void UVaRestRequestJSON::ResetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ResetData");
		
		UVaRestRequestJSON_ResetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.RemoveTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVaRestRequestJSON::RemoveTag(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.RemoveTag");
		
		UVaRestRequestJSON_RemoveTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.ProcessURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::ProcessURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ProcessURL");
		
		UVaRestRequestJSON_ProcessURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.HasTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestRequestJSON::HasTag(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.HasTag");
		
		UVaRestRequestJSON_HasTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.GetVerb
	 * 		Flags  -> ()
	 */
	EVaRestRequestVerb UVaRestRequestJSON::GetVerb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetVerb");
		
		UVaRestRequestJSON_GetVerb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.GetUrl
	 * 		Flags  -> ()
	 */
	class FString UVaRestRequestJSON::GetUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetUrl");
		
		UVaRestRequestJSON_GetUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.GetStatus
	 * 		Flags  -> ()
	 */
	EVaRestRequestStatus UVaRestRequestJSON::GetStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetStatus");
		
		UVaRestRequestJSON_GetStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.GetResponseValue
	 * 		Flags  -> ()
	 */
	class UVaRestJsonValue* UVaRestRequestJSON::GetResponseValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetResponseValue");
		
		UVaRestRequestJSON_GetResponseValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.GetResponseObject
	 * 		Flags  -> ()
	 */
	class UVaRestJsonObject* UVaRestRequestJSON::GetResponseObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetResponseObject");
		
		UVaRestRequestJSON_GetResponseObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.GetResponseHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HeaderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestRequestJSON::GetResponseHeader(const class FString& HeaderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetResponseHeader");
		
		UVaRestRequestJSON_GetResponseHeader_Params params {};
		params.HeaderName = HeaderName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.GetResponseContentAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCacheResponseContent                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestRequestJSON::GetResponseContentAsString(bool bCacheResponseContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetResponseContentAsString");
		
		UVaRestRequestJSON_GetResponseContentAsString_Params params {};
		params.bCacheResponseContent = bCacheResponseContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.GetResponseCode
	 * 		Flags  -> ()
	 */
	int32_t UVaRestRequestJSON::GetResponseCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetResponseCode");
		
		UVaRestRequestJSON_GetResponseCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.GetRequestObject
	 * 		Flags  -> ()
	 */
	class UVaRestJsonObject* UVaRestRequestJSON::GetRequestObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetRequestObject");
		
		UVaRestRequestJSON_GetRequestObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.GetAllResponseHeaders
	 * 		Flags  -> ()
	 */
	TArray<class FString> UVaRestRequestJSON::GetAllResponseHeaders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.GetAllResponseHeaders");
		
		UVaRestRequestJSON_GetAllResponseHeaders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.ExecuteProcessRequest
	 * 		Flags  -> ()
	 */
	void UVaRestRequestJSON::ExecuteProcessRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ExecuteProcessRequest");
		
		UVaRestRequestJSON_ExecuteProcessRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.Cancel
	 * 		Flags  -> ()
	 */
	void UVaRestRequestJSON::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.Cancel");
		
		UVaRestRequestJSON_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.ApplyURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVaRestJsonObject*                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::ApplyURL(const class FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.ApplyURL");
		
		UVaRestRequestJSON_ApplyURL_Params params {};
		params.URL = URL;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestRequestJSON.AddTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::AddTag(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestRequestJSON.AddTag");
		
		UVaRestRequestJSON_AddTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVaRestRequestJSON.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVaRestRequestJSON::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VaRest.VaRestRequestJSON");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVaRestSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVaRestSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VaRest.VaRestSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject
	 * 		Flags  -> ()
	 */
	class UVaRestJsonObject* UVaRestSubsystem::StaticConstructVaRestJsonObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject");
		
		UVaRestSubsystem_StaticConstructVaRestJsonObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.LoadJsonFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsRelativeToContentDir                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonObject* UVaRestSubsystem::LoadJsonFromFile(const class FString& Path, bool bIsRelativeToContentDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.LoadJsonFromFile");
		
		UVaRestSubsystem_LoadJsonFromFile_Params params {};
		params.Path = Path;
		params.bIsRelativeToContentDir = bIsRelativeToContentDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.DecodeJsonValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestSubsystem::DecodeJsonValue(const class FString& JsonString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.DecodeJsonValue");
		
		UVaRestSubsystem_DecodeJsonValue_Params params {};
		params.JsonString = JsonString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.DecodeJsonObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonObject* UVaRestSubsystem::DecodeJsonObject(const class FString& JsonString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.DecodeJsonObject");
		
		UVaRestSubsystem_DecodeJsonObject_Params params {};
		params.JsonString = JsonString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.ConstructVaRestRequestExt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVaRestRequestVerb                                 Verb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVaRestRequestContentType                          ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestRequestJSON* UVaRestSubsystem::ConstructVaRestRequestExt(EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructVaRestRequestExt");
		
		UVaRestSubsystem_ConstructVaRestRequestExt_Params params {};
		params.Verb = Verb;
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.ConstructVaRestRequest
	 * 		Flags  -> ()
	 */
	class UVaRestRequestJSON* UVaRestSubsystem::ConstructVaRestRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructVaRestRequest");
		
		UVaRestSubsystem_ConstructVaRestRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.ConstructVaRestJsonObject
	 * 		Flags  -> ()
	 */
	class UVaRestJsonObject* UVaRestSubsystem::ConstructVaRestJsonObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructVaRestJsonObject");
		
		UVaRestSubsystem_ConstructVaRestJsonObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.ConstructJsonValueString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueString(const class FString& StringValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructJsonValueString");
		
		UVaRestSubsystem_ConstructJsonValueString_Params params {};
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.ConstructJsonValueObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueObject(class UVaRestJsonObject* JsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructJsonValueObject");
		
		UVaRestSubsystem_ConstructJsonValueObject_Params params {};
		params.JsonObject = JsonObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.ConstructJsonValueNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueNumber(float Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructJsonValueNumber");
		
		UVaRestSubsystem_ConstructJsonValueNumber_Params params {};
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.ConstructJsonValueBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueBool(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructJsonValueBool");
		
		UVaRestSubsystem_ConstructJsonValueBool_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.ConstructJsonValueArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UVaRestJsonValue*>                    inArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueArray(TArray<class UVaRestJsonValue*> inArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.ConstructJsonValueArray");
		
		UVaRestSubsystem_ConstructJsonValueArray_Params params {};
		params.inArray = inArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VaRest.VaRestSubsystem.CallURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVaRestRequestVerb                                 Verb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVaRestRequestContentType                          ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVaRestJsonObject*                           VaRestJson                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVaRestSubsystem::CallURL(const class FString& URL, EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRest.VaRestSubsystem.CallURL");
		
		UVaRestSubsystem_CallURL_Params params {};
		params.URL = URL;
		params.Verb = Verb;
		params.ContentType = ContentType;
		params.VaRestJson = VaRestJson;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVaRestSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVaRestSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VaRest.VaRestSubsystem");
		return ptr;
	}

}


