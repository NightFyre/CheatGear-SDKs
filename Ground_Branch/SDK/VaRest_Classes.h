#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Class VaRest.VaRestJsonObject
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVaRestJsonObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_81O3[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		bool WriteToFilePath(const class FString& Path, bool bIsRelativeToProjectDir);
		void SetStringField(const class FString& FieldName, const class FString& StringValue);
		void SetStringArrayField(const class FString& FieldName, TArray<class FString> StringArray);
		void SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject);
		void SetObjectArrayField(const class FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray);
		void SetNumberField(const class FString& FieldName, float Number);
		void SetNumberArrayField(const class FString& FieldName, TArray<float> NumberArray);
		void SetMapFields_uint8(TMap<class FString, unsigned char> Fields);
		void SetMapFields_string(TMap<class FString, class FString> Fields);
		void SetMapFields_int64(TMap<class FString, int64_t> Fields);
		void SetMapFields_int32(TMap<class FString, int32_t> Fields);
		void SetMapFields_bool(TMap<class FString, bool> Fields);
		void SetIntegerField(const class FString& FieldName, int32_t Number);
		void SetInt64Field(const class FString& FieldName, int64_t Number);
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
		int32_t GetIntegerField(const class FString& FieldName);
		int64_t GetInt64Field(const class FString& FieldName);
		TArray<class FString> GetFieldNames();
		class UVaRestJsonValue* GetField(const class FString& FieldName);
		bool GetBoolField(const class FString& FieldName);
		TArray<bool> GetBoolArrayField(const class FString& FieldName);
		TArray<class UVaRestJsonValue*> GetArrayField(const class FString& FieldName);
		class FString EncodeJsonToSingleString();
		class FString EncodeJson();
		bool DecodeJson(const class FString& JsonString, bool bUseIncrementalParser);
		static UClass* StaticClass();
	};

	/**
	 * Class VaRest.VaRestJsonValue
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVaRestJsonValue : public UObject
	{
	public:
		unsigned char                                              UnknownData_JHNA[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void Reset();
		bool IsNull();
		class FString GetTypeString();
		EVaJson GetType();
		class FString AsString();
		class UVaRestJsonObject* AsObject();
		float AsNumber();
		int32_t AsInt64();
		int32_t AsInt32();
		bool AsBool();
		TArray<class UVaRestJsonValue*> AsArray();
		static UClass* StaticClass();
	};

	/**
	 * Class VaRest.VaRestLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVaRestLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString StringToSha1(const class FString& StringToHash);
		class FString StringToMd5(const class FString& StringToHash);
		class FString PercentEncode(const class FString& Source);
		EVaRestHttpStatusCode HTTPStatusIntToEnum(int32_t StatusCode);
		struct FVaRestURL GetWorldURL(class UObject* WorldContextObject);
		class FString GetVaRestVersion();
		class UVaRestSettings* GetVaRestSettings();
		bool Base64EncodeData(TArray<unsigned char> Data, class FString* Dest);
		class FString Base64Encode(const class FString& Source);
		bool Base64DecodeData(const class FString& Source, TArray<unsigned char>* Dest);
		bool Base64Decode(const class FString& Source, class FString* Dest);
		static UClass* StaticClass();
	};

	/**
	 * Class VaRest.VaRestRequestJSON
	 * Size -> 0x01A0 (FullSize[0x01C8] - InheritedSize[0x0028])
	 */
	class UVaRestRequestJSON : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnRequestComplete;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRequestFail;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZLQ[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ResponseSize;                                            // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIAM[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ResponseContent;                                         // 0x0090(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValidJsonResponse;                                    // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WWK[0xF];                                   // 0x00A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVaRestJsonObject*                                   RequestJsonObj;                                          // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W7OO[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVaRestJsonObject*                                   ResponseJsonObj;                                         // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVaRestJsonValue*                                    ResponseJsonValue;                                       // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QX4Y[0xD0];                                  // 0x00F8(0x00D0) MISSED OFFSET (PADDING)

	public:
		void SetVerb(EVaRestRequestVerb Verb);
		void SetURL(const class FString& URL);
		void SetStringRequestContent(const class FString& Content);
		void SetResponseObject(class UVaRestJsonObject* JsonObject);
		void SetRequestObject(class UVaRestJsonObject* JsonObject);
		void SetHeader(const class FString& HeaderName, const class FString& HeaderValue);
		void SetCustomVerb(const class FString& Verb);
		void SetContentType(EVaRestRequestContentType ContentType);
		void SetBinaryRequestContent(TArray<unsigned char> Content);
		void SetBinaryContentType(const class FString& ContentType);
		void ResetResponseData();
		void ResetRequestData();
		void ResetData();
		int32_t RemoveTag(const class FName& Tag);
		void ProcessURL(const class FString& URL);
		bool HasTag(const class FName& Tag);
		EVaRestRequestVerb GetVerb();
		class FString GetUrl();
		EVaRestRequestStatus GetStatus();
		class UVaRestJsonValue* GetResponseValue();
		class UVaRestJsonObject* GetResponseObject();
		class FString GetResponseHeader(const class FString& HeaderName);
		class FString GetResponseContentAsString(bool bCacheResponseContent);
		int32_t GetResponseCode();
		class UVaRestJsonObject* GetRequestObject();
		TArray<class FString> GetAllResponseHeaders();
		void ExecuteProcessRequest();
		void Cancel();
		void ApplyURL(const class FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		void AddTag(const class FName& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class VaRest.VaRestSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UVaRestSettings : public UObject
	{
	public:
		bool                                                       bExtendedLog;                                            // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseChunkedParser;                                       // 0x0029(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMXO[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VaRest.VaRestSubsystem
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UVaRestSubsystem : public UEngineSubsystem
	{
	public:
		TMap<class UVaRestRequestJSON*, struct FVaRestCallResponse> RequestMap;                                              // 0x0030(0x0050) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		class UVaRestJsonObject* StaticConstructVaRestJsonObject();
		class UVaRestJsonObject* LoadJsonFromFile(const class FString& Path, bool bIsRelativeToContentDir);
		class UVaRestJsonValue* DecodeJsonValue(const class FString& JsonString);
		class UVaRestJsonObject* DecodeJsonObject(const class FString& JsonString);
		class UVaRestRequestJSON* ConstructVaRestRequestExt(EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType);
		class UVaRestRequestJSON* ConstructVaRestRequest();
		class UVaRestJsonObject* ConstructVaRestJsonObject();
		class UVaRestJsonValue* ConstructJsonValueString(const class FString& StringValue);
		class UVaRestJsonValue* ConstructJsonValueObject(class UVaRestJsonObject* JsonObject);
		class UVaRestJsonValue* ConstructJsonValueNumber(float Number);
		class UVaRestJsonValue* ConstructJsonValueBool(bool InValue);
		class UVaRestJsonValue* ConstructJsonValueArray(TArray<class UVaRestJsonValue*> inArray);
		void CallURL(const class FString& URL, EVaRestRequestVerb Verb, EVaRestRequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
