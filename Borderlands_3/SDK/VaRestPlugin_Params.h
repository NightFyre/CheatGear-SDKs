#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function VaRestPlugin.VaRestJsonObject.SetStringField
	 */
	struct UVaRestJsonObject_SetStringField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StringValue;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.SetStringArrayField
	 */
	struct UVaRestJsonObject_SetStringArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      StringArray;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.SetObjectField
	 */
	struct UVaRestJsonObject_SetObjectField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   JsonObject;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField
	 */
	struct UVaRestJsonObject_SetObjectArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVaRestJsonObject*>                           ObjectArray;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.SetNumberField
	 */
	struct UVaRestJsonObject_SetNumberField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Number;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField
	 */
	struct UVaRestJsonObject_SetNumberArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              NumberArray;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.SetField
	 */
	struct UVaRestJsonObject_SetField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    JsonValue;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.SetBoolField
	 */
	struct UVaRestJsonObject_SetBoolField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField
	 */
	struct UVaRestJsonObject_SetBoolArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<bool>                                               BoolArray;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.SetArrayField
	 */
	struct UVaRestJsonObject_SetArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVaRestJsonValue*>                            inArray;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.Reset
	 */
	struct UVaRestJsonObject_Reset_Params
	{	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.RemoveField
	 */
	struct UVaRestJsonObject_RemoveField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.MergeJsonObject
	 */
	struct UVaRestJsonObject_MergeJsonObject_Params
	{
	public:
		class UVaRestJsonObject*                                   InJsonObject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Overwrite;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.HasField
	 */
	struct UVaRestJsonObject_HasField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetStringField
	 */
	struct UVaRestJsonObject_GetStringField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetStringArrayField
	 */
	struct UVaRestJsonObject_GetStringArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetObjectField
	 */
	struct UVaRestJsonObject_GetObjectField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField
	 */
	struct UVaRestJsonObject_GetObjectArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVaRestJsonObject*>                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetNumberField
	 */
	struct UVaRestJsonObject_GetNumberField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField
	 */
	struct UVaRestJsonObject_GetNumberArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetFieldNames
	 */
	struct UVaRestJsonObject_GetFieldNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetField
	 */
	struct UVaRestJsonObject_GetField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetBoolField
	 */
	struct UVaRestJsonObject_GetBoolField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField
	 */
	struct UVaRestJsonObject_GetBoolArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<bool>                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.GetArrayField
	 */
	struct UVaRestJsonObject_GetArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVaRestJsonValue*>                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString
	 */
	struct UVaRestJsonObject_EncodeJsonToSingleString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.EncodeJson
	 */
	struct UVaRestJsonObject_EncodeJson_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.DecodeJson
	 */
	struct UVaRestJsonObject_DecodeJson_Params
	{
	public:
		class FString                                              JsonString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject
	 */
	struct UVaRestJsonObject_ConstructJsonObject_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.IsNull
	 */
	struct UVaRestJsonValue_IsNull_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.GetTypeString
	 */
	struct UVaRestJsonValue_GetTypeString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.GetType
	 */
	struct UVaRestJsonValue_GetType_Params
	{
	public:
		EVaJson                                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString
	 */
	struct UVaRestJsonValue_ConstructJsonValueString_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StringValue;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject
	 */
	struct UVaRestJsonValue_ConstructJsonValueObject_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   JsonObject;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber
	 */
	struct UVaRestJsonValue_ConstructJsonValueNumber_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Number;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GMHJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool
	 */
	struct UVaRestJsonValue_ConstructJsonValueBool_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IWZW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray
	 */
	struct UVaRestJsonValue_ConstructJsonValueArray_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVaRestJsonValue*>                            inArray;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.AsString
	 */
	struct UVaRestJsonValue_AsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.AsObject
	 */
	struct UVaRestJsonValue_AsObject_Params
	{
	public:
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.AsNumber
	 */
	struct UVaRestJsonValue_AsNumber_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.AsBool
	 */
	struct UVaRestJsonValue_AsBool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestJsonValue.AsArray
	 */
	struct UVaRestJsonValue_AsArray_Params
	{
	public:
		TArray<class UVaRestJsonValue*>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestLibrary.PercentEncode
	 */
	struct UVaRestLibrary_PercentEncode_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestLibrary.CallURL
	 */
	struct UVaRestLibrary_CallURL_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              URL;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERequestVerb                                               Verb;                                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERequestContentType                                        ContentType;                                             // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IC2Y[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVaRestJsonObject*                                   VaRestJson;                                              // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestLibrary.Base64EncodeData
	 */
	struct UVaRestLibrary_Base64EncodeData_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Dest;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestLibrary.Base64Encode
	 */
	struct UVaRestLibrary_Base64Encode_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestLibrary.Base64DecodeData
	 */
	struct UVaRestLibrary_Base64DecodeData_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Dest;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestLibrary.Base64Decode
	 */
	struct UVaRestLibrary_Base64Decode_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Dest;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.SetVerb
	 */
	struct UVaRestRequestJSON_SetVerb_Params
	{
	public:
		ERequestVerb                                               Verb;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent
	 */
	struct UVaRestRequestJSON_SetStringRequestContent_Params
	{
	public:
		class FString                                              Content;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.SetResponseObject
	 */
	struct UVaRestRequestJSON_SetResponseObject_Params
	{
	public:
		class UVaRestJsonObject*                                   JsonObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.SetRequestObject
	 */
	struct UVaRestRequestJSON_SetRequestObject_Params
	{
	public:
		class UVaRestJsonObject*                                   JsonObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.SetHeader
	 */
	struct UVaRestRequestJSON_SetHeader_Params
	{
	public:
		class FString                                              HeaderName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              HeaderValue;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb
	 */
	struct UVaRestRequestJSON_SetCustomVerb_Params
	{
	public:
		class FString                                              Verb;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.SetContentType
	 */
	struct UVaRestRequestJSON_SetContentType_Params
	{
	public:
		ERequestContentType                                        ContentType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent
	 */
	struct UVaRestRequestJSON_SetBinaryRequestContent_Params
	{
	public:
		TArray<unsigned char>                                      Content;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType
	 */
	struct UVaRestRequestJSON_SetBinaryContentType_Params
	{
	public:
		class FString                                              ContentType;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.ResetResponseData
	 */
	struct UVaRestRequestJSON_ResetResponseData_Params
	{	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.ResetRequestData
	 */
	struct UVaRestRequestJSON_ResetRequestData_Params
	{	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.ResetData
	 */
	struct UVaRestRequestJSON_ResetData_Params
	{	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.RemoveTag
	 */
	struct UVaRestRequestJSON_RemoveTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.ProcessURL
	 */
	struct UVaRestRequestJSON_ProcessURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.HasTag
	 */
	struct UVaRestRequestJSON_HasTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.GetUrl
	 */
	struct UVaRestRequestJSON_GetUrl_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.GetStatus
	 */
	struct UVaRestRequestJSON_GetStatus_Params
	{
	public:
		ERequestStatus                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.GetResponseObject
	 */
	struct UVaRestRequestJSON_GetResponseObject_Params
	{
	public:
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader
	 */
	struct UVaRestRequestJSON_GetResponseHeader_Params
	{
	public:
		class FString                                              HeaderName;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.GetResponseCode
	 */
	struct UVaRestRequestJSON_GetResponseCode_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.GetRequestObject
	 */
	struct UVaRestRequestJSON_GetRequestObject_Params
	{
	public:
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders
	 */
	struct UVaRestRequestJSON_GetAllResponseHeaders_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt
	 */
	struct UVaRestRequestJSON_ConstructRequestExt_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERequestVerb                                               Verb;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERequestContentType                                        ContentType;                                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P67W[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVaRestRequestJSON*                                  ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.ConstructRequest
	 */
	struct UVaRestRequestJSON_ConstructRequest_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestRequestJSON*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.Cancel
	 */
	struct UVaRestRequestJSON_Cancel_Params
	{	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.ApplyURL
	 */
	struct UVaRestRequestJSON_ApplyURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   Result;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0020(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRestPlugin.VaRestRequestJSON.AddTag
	 */
	struct UVaRestRequestJSON_AddTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
