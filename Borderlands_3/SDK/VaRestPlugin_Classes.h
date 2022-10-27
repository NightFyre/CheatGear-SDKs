#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class VaRestPlugin.VaRestJsonObject
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVaRestJsonObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_ED1K[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetStringField(const class FString& FieldName, const class FString& StringValue);
		void SetStringArrayField(const class FString& FieldName, TArray<class FString> StringArray);
		void SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject);
		void SetObjectArrayField(const class FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray);
		void SetNumberField(const class FString& FieldName, float Number);
		void SetNumberArrayField(const class FString& FieldName, TArray<float> NumberArray);
		void SetField(const class FString& FieldName, class UVaRestJsonValue* JsonValue);
		void SetBoolField(const class FString& FieldName, bool InValue);
		void SetBoolArrayField(const class FString& FieldName, TArray<bool> BoolArray);
		void SetArrayField(const class FString& FieldName, TArray<class UVaRestJsonValue*> inArray);
		void Reset();
		void RemoveField(const class FString& FieldName);
		void MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite);
		bool HasField(const class FString& FieldName);
		class FString GetStringField(const class FString& FieldName);
		TArray<class FString> GetStringArrayField(const class FString& FieldName);
		class UVaRestJsonObject* GetObjectField(const class FString& FieldName);
		TArray<class UVaRestJsonObject*> GetObjectArrayField(const class FString& FieldName);
		float GetNumberField(const class FString& FieldName);
		TArray<float> GetNumberArrayField(const class FString& FieldName);
		TArray<class FString> GetFieldNames();
		class UVaRestJsonValue* GetField(const class FString& FieldName);
		bool GetBoolField(const class FString& FieldName);
		TArray<bool> GetBoolArrayField(const class FString& FieldName);
		TArray<class UVaRestJsonValue*> GetArrayField(const class FString& FieldName);
		class FString EncodeJsonToSingleString();
		class FString EncodeJson();
		bool DecodeJson(const class FString& JsonString);
		class UVaRestJsonObject* STATIC_ConstructJsonObject(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class VaRestPlugin.VaRestJsonValue
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVaRestJsonValue : public UObject
	{
	public:
		unsigned char                                              UnknownData_J38S[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		bool IsNull();
		class FString GetTypeString();
		EVaJson GetType();
		class UVaRestJsonValue* STATIC_ConstructJsonValueString(class UObject* WorldContextObject, const class FString& StringValue);
		class UVaRestJsonValue* STATIC_ConstructJsonValueObject(class UObject* WorldContextObject, class UVaRestJsonObject* JsonObject);
		class UVaRestJsonValue* STATIC_ConstructJsonValueNumber(class UObject* WorldContextObject, float Number);
		class UVaRestJsonValue* STATIC_ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue);
		class UVaRestJsonValue* STATIC_ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UVaRestJsonValue*> inArray);
		class FString AsString();
		class UVaRestJsonObject* AsObject();
		float AsNumber();
		bool AsBool();
		TArray<class UVaRestJsonValue*> AsArray();
		static UClass* StaticClass();
	};

	/**
	 * Class VaRestPlugin.VaRestLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVaRestLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_PercentEncode(const class FString& Source);
		void STATIC_CallURL(class UObject* WorldContextObject, const class FString& URL, ERequestVerb Verb, ERequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const class FScriptDelegate& Callback);
		bool STATIC_Base64EncodeData(TArray<unsigned char> Data, class FString* Dest);
		class FString STATIC_Base64Encode(const class FString& Source);
		bool STATIC_Base64DecodeData(const class FString& Source, TArray<unsigned char>* Dest);
		bool STATIC_Base64Decode(const class FString& Source, class FString* Dest);
		static UClass* StaticClass();
	};

	/**
	 * Class VaRestPlugin.VaRestRequestJSON
	 * Size -> 0x0190 (FullSize[0x01B8] - InheritedSize[0x0028])
	 */
	class UVaRestRequestJSON : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnRequestComplete;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRequestFail;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1EW[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ResponseContent;                                         // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValidJsonResponse;                                    // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25HI[0xF];                                   // 0x0099(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVaRestJsonObject*                                   RequestJsonObj;                                          // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6UZY[0x30];                                  // 0x00B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVaRestJsonObject*                                   ResponseJsonObj;                                         // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7QAP[0xD0];                                  // 0x00E8(0x00D0) MISSED OFFSET (PADDING)

	public:
		void SetVerb(ERequestVerb Verb);
		void SetStringRequestContent(const class FString& Content);
		void SetResponseObject(class UVaRestJsonObject* JsonObject);
		void SetRequestObject(class UVaRestJsonObject* JsonObject);
		void SetHeader(const class FString& HeaderName, const class FString& HeaderValue);
		void SetCustomVerb(const class FString& Verb);
		void SetContentType(ERequestContentType ContentType);
		void SetBinaryRequestContent(TArray<unsigned char> Content);
		void SetBinaryContentType(const class FString& ContentType);
		void ResetResponseData();
		void ResetRequestData();
		void ResetData();
		int32_t RemoveTag(const class FName& Tag);
		void ProcessURL(const class FString& URL);
		bool HasTag(const class FName& Tag);
		class FString GetUrl();
		ERequestStatus GetStatus();
		class UVaRestJsonObject* GetResponseObject();
		class FString GetResponseHeader(const class FString& HeaderName);
		int32_t GetResponseCode();
		class UVaRestJsonObject* GetRequestObject();
		TArray<class FString> GetAllResponseHeaders();
		class UVaRestRequestJSON* STATIC_ConstructRequestExt(class UObject* WorldContextObject, ERequestVerb Verb, ERequestContentType ContentType);
		class UVaRestRequestJSON* STATIC_ConstructRequest(class UObject* WorldContextObject);
		void Cancel();
		void ApplyURL(const class FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		void AddTag(const class FName& Tag);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
