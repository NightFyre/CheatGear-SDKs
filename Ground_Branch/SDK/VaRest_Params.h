#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function VaRest.VaRestJsonObject.WriteToFilePath
	 */
	struct UVaRestJsonObject_WriteToFilePath_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRelativeToProjectDir;                                 // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetStringField
	 */
	struct UVaRestJsonObject_SetStringField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StringValue;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetStringArrayField
	 */
	struct UVaRestJsonObject_SetStringArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      StringArray;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetObjectField
	 */
	struct UVaRestJsonObject_SetObjectField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   JsonObject;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetObjectArrayField
	 */
	struct UVaRestJsonObject_SetObjectArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVaRestJsonObject*>                           ObjectArray;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetNumberField
	 */
	struct UVaRestJsonObject_SetNumberField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Number;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetNumberArrayField
	 */
	struct UVaRestJsonObject_SetNumberArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              NumberArray;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetMapFields_uint8
	 */
	struct UVaRestJsonObject_SetMapFields_uint8_Params
	{
	public:
		TMap<class FString, unsigned char>                         Fields;                                                  // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetMapFields_string
	 */
	struct UVaRestJsonObject_SetMapFields_string_Params
	{
	public:
		TMap<class FString, class FString>                         Fields;                                                  // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetMapFields_int64
	 */
	struct UVaRestJsonObject_SetMapFields_int64_Params
	{
	public:
		TMap<class FString, int64_t>                               Fields;                                                  // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetMapFields_int32
	 */
	struct UVaRestJsonObject_SetMapFields_int32_Params
	{
	public:
		TMap<class FString, int32_t>                               Fields;                                                  // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetMapFields_bool
	 */
	struct UVaRestJsonObject_SetMapFields_bool_Params
	{
	public:
		TMap<class FString, bool>                                  Fields;                                                  // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetIntegerField
	 */
	struct UVaRestJsonObject_SetIntegerField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Number;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetInt64Field
	 */
	struct UVaRestJsonObject_SetInt64Field_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    Number;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetField
	 */
	struct UVaRestJsonObject_SetField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    JsonValue;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetBoolField
	 */
	struct UVaRestJsonObject_SetBoolField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetBoolArrayField
	 */
	struct UVaRestJsonObject_SetBoolArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<bool>                                               BoolArray;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.SetArrayField
	 */
	struct UVaRestJsonObject_SetArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVaRestJsonValue*>                            inArray;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.Reset
	 */
	struct UVaRestJsonObject_Reset_Params
	{	};

	/**
	 * Function VaRest.VaRestJsonObject.RemoveField
	 */
	struct UVaRestJsonObject_RemoveField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.MergeJsonObject
	 */
	struct UVaRestJsonObject_MergeJsonObject_Params
	{
	public:
		class UVaRestJsonObject*                                   InJsonObject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Overwrite;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.HasField
	 */
	struct UVaRestJsonObject_HasField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetStringField
	 */
	struct UVaRestJsonObject_GetStringField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetStringArrayField
	 */
	struct UVaRestJsonObject_GetStringArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetObjectField
	 */
	struct UVaRestJsonObject_GetObjectField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetObjectArrayField
	 */
	struct UVaRestJsonObject_GetObjectArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVaRestJsonObject*>                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetNumberField
	 */
	struct UVaRestJsonObject_GetNumberField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetNumberArrayField
	 */
	struct UVaRestJsonObject_GetNumberArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetIntegerField
	 */
	struct UVaRestJsonObject_GetIntegerField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetInt64Field
	 */
	struct UVaRestJsonObject_GetInt64Field_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetFieldNames
	 */
	struct UVaRestJsonObject_GetFieldNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetField
	 */
	struct UVaRestJsonObject_GetField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetBoolField
	 */
	struct UVaRestJsonObject_GetBoolField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetBoolArrayField
	 */
	struct UVaRestJsonObject_GetBoolArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<bool>                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.GetArrayField
	 */
	struct UVaRestJsonObject_GetArrayField_Params
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UVaRestJsonValue*>                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.EncodeJsonToSingleString
	 */
	struct UVaRestJsonObject_EncodeJsonToSingleString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.EncodeJson
	 */
	struct UVaRestJsonObject_EncodeJson_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonObject.DecodeJson
	 */
	struct UVaRestJsonObject_DecodeJson_Params
	{
	public:
		class FString                                              JsonString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseIncrementalParser;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonValue.Reset
	 */
	struct UVaRestJsonValue_Reset_Params
	{	};

	/**
	 * Function VaRest.VaRestJsonValue.IsNull
	 */
	struct UVaRestJsonValue_IsNull_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonValue.GetTypeString
	 */
	struct UVaRestJsonValue_GetTypeString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonValue.GetType
	 */
	struct UVaRestJsonValue_GetType_Params
	{
	public:
		EVaJson                                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonValue.AsString
	 */
	struct UVaRestJsonValue_AsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonValue.AsObject
	 */
	struct UVaRestJsonValue_AsObject_Params
	{
	public:
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonValue.AsNumber
	 */
	struct UVaRestJsonValue_AsNumber_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonValue.AsInt64
	 */
	struct UVaRestJsonValue_AsInt64_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonValue.AsInt32
	 */
	struct UVaRestJsonValue_AsInt32_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonValue.AsBool
	 */
	struct UVaRestJsonValue_AsBool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestJsonValue.AsArray
	 */
	struct UVaRestJsonValue_AsArray_Params
	{
	public:
		TArray<class UVaRestJsonValue*>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.StringToSha1
	 */
	struct UVaRestLibrary_StringToSha1_Params
	{
	public:
		class FString                                              StringToHash;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.StringToMd5
	 */
	struct UVaRestLibrary_StringToMd5_Params
	{
	public:
		class FString                                              StringToHash;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.PercentEncode
	 */
	struct UVaRestLibrary_PercentEncode_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.HTTPStatusIntToEnum
	 */
	struct UVaRestLibrary_HTTPStatusIntToEnum_Params
	{
	public:
		int32_t                                                    StatusCode;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVaRestHttpStatusCode                                      ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.GetWorldURL
	 */
	struct UVaRestLibrary_GetWorldURL_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVaRestURL                                          ReturnValue;                                             // 0x0008(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.GetVaRestVersion
	 */
	struct UVaRestLibrary_GetVaRestVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.GetVaRestSettings
	 */
	struct UVaRestLibrary_GetVaRestSettings_Params
	{
	public:
		class UVaRestSettings*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.Base64EncodeData
	 */
	struct UVaRestLibrary_Base64EncodeData_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Dest;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.Base64Encode
	 */
	struct UVaRestLibrary_Base64Encode_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.Base64DecodeData
	 */
	struct UVaRestLibrary_Base64DecodeData_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Dest;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestLibrary.Base64Decode
	 */
	struct UVaRestLibrary_Base64Decode_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Dest;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.SetVerb
	 */
	struct UVaRestRequestJSON_SetVerb_Params
	{
	public:
		EVaRestRequestVerb                                         Verb;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.SetURL
	 */
	struct UVaRestRequestJSON_SetURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.SetStringRequestContent
	 */
	struct UVaRestRequestJSON_SetStringRequestContent_Params
	{
	public:
		class FString                                              Content;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.SetResponseObject
	 */
	struct UVaRestRequestJSON_SetResponseObject_Params
	{
	public:
		class UVaRestJsonObject*                                   JsonObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.SetRequestObject
	 */
	struct UVaRestRequestJSON_SetRequestObject_Params
	{
	public:
		class UVaRestJsonObject*                                   JsonObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.SetHeader
	 */
	struct UVaRestRequestJSON_SetHeader_Params
	{
	public:
		class FString                                              HeaderName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              HeaderValue;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.SetCustomVerb
	 */
	struct UVaRestRequestJSON_SetCustomVerb_Params
	{
	public:
		class FString                                              Verb;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.SetContentType
	 */
	struct UVaRestRequestJSON_SetContentType_Params
	{
	public:
		EVaRestRequestContentType                                  ContentType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.SetBinaryRequestContent
	 */
	struct UVaRestRequestJSON_SetBinaryRequestContent_Params
	{
	public:
		TArray<unsigned char>                                      Content;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.SetBinaryContentType
	 */
	struct UVaRestRequestJSON_SetBinaryContentType_Params
	{
	public:
		class FString                                              ContentType;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.ResetResponseData
	 */
	struct UVaRestRequestJSON_ResetResponseData_Params
	{	};

	/**
	 * Function VaRest.VaRestRequestJSON.ResetRequestData
	 */
	struct UVaRestRequestJSON_ResetRequestData_Params
	{	};

	/**
	 * Function VaRest.VaRestRequestJSON.ResetData
	 */
	struct UVaRestRequestJSON_ResetData_Params
	{	};

	/**
	 * Function VaRest.VaRestRequestJSON.RemoveTag
	 */
	struct UVaRestRequestJSON_RemoveTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.ProcessURL
	 */
	struct UVaRestRequestJSON_ProcessURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.HasTag
	 */
	struct UVaRestRequestJSON_HasTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.GetVerb
	 */
	struct UVaRestRequestJSON_GetVerb_Params
	{
	public:
		EVaRestRequestVerb                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.GetUrl
	 */
	struct UVaRestRequestJSON_GetUrl_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.GetStatus
	 */
	struct UVaRestRequestJSON_GetStatus_Params
	{
	public:
		EVaRestRequestStatus                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.GetResponseValue
	 */
	struct UVaRestRequestJSON_GetResponseValue_Params
	{
	public:
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.GetResponseObject
	 */
	struct UVaRestRequestJSON_GetResponseObject_Params
	{
	public:
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.GetResponseHeader
	 */
	struct UVaRestRequestJSON_GetResponseHeader_Params
	{
	public:
		class FString                                              HeaderName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.GetResponseContentAsString
	 */
	struct UVaRestRequestJSON_GetResponseContentAsString_Params
	{
	public:
		bool                                                       bCacheResponseContent;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FVOA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.GetResponseCode
	 */
	struct UVaRestRequestJSON_GetResponseCode_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.GetRequestObject
	 */
	struct UVaRestRequestJSON_GetRequestObject_Params
	{
	public:
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.GetAllResponseHeaders
	 */
	struct UVaRestRequestJSON_GetAllResponseHeaders_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestRequestJSON.ExecuteProcessRequest
	 */
	struct UVaRestRequestJSON_ExecuteProcessRequest_Params
	{	};

	/**
	 * Function VaRest.VaRestRequestJSON.Cancel
	 */
	struct UVaRestRequestJSON_Cancel_Params
	{	};

	/**
	 * Function VaRest.VaRestRequestJSON.ApplyURL
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
	 * Function VaRest.VaRestRequestJSON.AddTag
	 */
	struct UVaRestRequestJSON_AddTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject
	 */
	struct UVaRestSubsystem_StaticConstructVaRestJsonObject_Params
	{
	public:
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.LoadJsonFromFile
	 */
	struct UVaRestSubsystem_LoadJsonFromFile_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRelativeToContentDir;                                 // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YXUM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.DecodeJsonValue
	 */
	struct UVaRestSubsystem_DecodeJsonValue_Params
	{
	public:
		class FString                                              JsonString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.DecodeJsonObject
	 */
	struct UVaRestSubsystem_DecodeJsonObject_Params
	{
	public:
		class FString                                              JsonString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.ConstructVaRestRequestExt
	 */
	struct UVaRestSubsystem_ConstructVaRestRequestExt_Params
	{
	public:
		EVaRestRequestVerb                                         Verb;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVaRestRequestContentType                                  ContentType;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HB5X[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVaRestRequestJSON*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.ConstructVaRestRequest
	 */
	struct UVaRestSubsystem_ConstructVaRestRequest_Params
	{
	public:
		class UVaRestRequestJSON*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.ConstructVaRestJsonObject
	 */
	struct UVaRestSubsystem_ConstructVaRestJsonObject_Params
	{
	public:
		class UVaRestJsonObject*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.ConstructJsonValueString
	 */
	struct UVaRestSubsystem_ConstructJsonValueString_Params
	{
	public:
		class FString                                              StringValue;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.ConstructJsonValueObject
	 */
	struct UVaRestSubsystem_ConstructJsonValueObject_Params
	{
	public:
		class UVaRestJsonObject*                                   JsonObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.ConstructJsonValueNumber
	 */
	struct UVaRestSubsystem_ConstructJsonValueNumber_Params
	{
	public:
		float                                                      Number;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NM16[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.ConstructJsonValueBool
	 */
	struct UVaRestSubsystem_ConstructJsonValueBool_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9TBJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.ConstructJsonValueArray
	 */
	struct UVaRestSubsystem_ConstructJsonValueArray_Params
	{
	public:
		TArray<class UVaRestJsonValue*>                            inArray;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UVaRestJsonValue*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VaRest.VaRestSubsystem.CallURL
	 */
	struct UVaRestSubsystem_CallURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVaRestRequestVerb                                         Verb;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVaRestRequestContentType                                  ContentType;                                             // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KK4H[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVaRestJsonObject*                                   VaRestJson;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
