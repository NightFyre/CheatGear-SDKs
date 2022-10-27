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
	 * Class LuaMachine.LuaBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULuaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UnregisterLuaConsoleCommand(const class FString& CommandName);
		void SwitchOnLuaValueType(const struct FLuaValue& LuaValue, ELuaValueType* LuaValueTypes);
		void RegisterLuaConsoleCommand(const class FString& CommandName, const struct FLuaValue& LuaConsoleCommand);
		void LuaValueYield(const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		class FString LuaValueToUTF8(const struct FLuaValue& Value);
		class FString LuaValueToUTF32(const struct FLuaValue& Value);
		class FString LuaValueToUTF16(const struct FLuaValue& Value);
		class UTexture2D* LuaValueToTransientTexture(int32_t Width, int32_t Height, const struct FLuaValue& Value, EPixelFormat PixelFormat, bool bDetectFormat);
		class USoundWave* LuaValueToTransientSoundWave(const struct FLuaValue& Value, bool bLoop);
		int64_t LuaValueToPointer(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& Value);
		class FString LuaValueToJson(const struct FLuaValue& Value);
		class FString LuaValueToHexPointer(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& Value);
		class UClass* LuaValueToBlueprintGeneratedClass(const struct FLuaValue& Value);
		class FString LuaValueToBase64(const struct FLuaValue& Value);
		TArray<struct FLuaValue> LuaValueResumeMulti(const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		class UObject* LuaValueLoadObject(const struct FLuaValue& Value);
		class UClass* LuaValueLoadClass(const struct FLuaValue& Value, bool bDetectBlueprintGeneratedClass);
		int32_t LuaValueLength(const struct FLuaValue& Value);
		bool LuaValueIsThread(const struct FLuaValue& Value);
		bool LuaValueIsTable(const struct FLuaValue& Value);
		bool LuaValueIsString(const struct FLuaValue& Value);
		bool LuaValueIsReferencedInLuaRegistry(const struct FLuaValue& Value);
		bool LuaValueIsOwned(const struct FLuaValue& Value);
		bool LuaValueIsNumber(const struct FLuaValue& Value);
		bool LuaValueIsNotNil(const struct FLuaValue& Value);
		bool LuaValueIsNil(const struct FLuaValue& Value);
		bool LuaValueIsInteger(const struct FLuaValue& Value);
		bool LuaValueIsFunction(const struct FLuaValue& Value);
		bool LuaValueIsBoolean(const struct FLuaValue& Value);
		class UClass* LuaValueGetOwner(const struct FLuaValue& Value);
		struct FLuaValue LuaValueFromUTF8(const class FString& String);
		struct FLuaValue LuaValueFromUTF32(const class FString& String);
		struct FLuaValue LuaValueFromUTF16(const class FString& String);
		bool LuaValueFromJson(class UObject* WorldContextObject, class UClass* State, const class FString& Json, struct FLuaValue* Value);
		struct FLuaValue LuaValueFromBase64(const class FString& Base64);
		TArray<struct FLuaValue> LuaValueCallMulti(const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		struct FLuaValue LuaValueCallIfNotNil(const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		struct FLuaValue LuaValueCall(const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		TArray<struct FLuaValue> LuaValueArrayMerge(TArray<struct FLuaValue> Array1, TArray<struct FLuaValue> Array2);
		TArray<struct FLuaValue> LuaValueArrayAppend(TArray<struct FLuaValue> Array, const struct FLuaValue& Value);
		ELuaThreadStatus LuaThreadGetStatus(const struct FLuaValue& Value);
		int32_t LuaThreadGetStackTop(const struct FLuaValue& Value);
		TArray<struct FLuaValue> LuaTableUnpack(const struct FLuaValue& InTable);
		struct FVector LuaTableToVector(const struct FLuaValue& Value);
		struct FLuaValue LuaTableSetMetaTable(const struct FLuaValue& InTable, const struct FLuaValue& InMetaTable);
		struct FLuaValue LuaTableSetField(const struct FLuaValue& Table, const class FString& Key, const struct FLuaValue& Value);
		struct FLuaValue LuaTableSetByIndex(const struct FLuaValue& Table, int32_t Index, const struct FLuaValue& Value);
		TArray<struct FLuaValue> LuaTableRange(const struct FLuaValue& InTable, int32_t First, int32_t Last);
		struct FLuaValue LuaTablePack(class UObject* WorldContextObject, class UClass* State, TArray<struct FLuaValue> Values);
		TArray<struct FLuaValue> LuaTableMergeUnpack(const struct FLuaValue& InTable1, const struct FLuaValue& InTable2);
		struct FLuaValue LuaTableMergePack(class UObject* WorldContextObject, class UClass* State, TArray<struct FLuaValue> Values1, TArray<struct FLuaValue> Values2);
		struct FLuaValue LuaTableKeyCallWithSelf(const struct FLuaValue& InTable, const class FString& Key, TArray<struct FLuaValue> Args);
		struct FLuaValue LuaTableKeyCall(const struct FLuaValue& InTable, const class FString& Key, TArray<struct FLuaValue> Args);
		struct FLuaValue LuaTableIndexCall(const struct FLuaValue& InTable, int32_t Index, TArray<struct FLuaValue> Args);
		bool LuaTableImplementsAny(const struct FLuaValue& Table, TArray<class ULuaTableAsset*> TableAssets);
		bool LuaTableImplementsAll(const struct FLuaValue& Table, TArray<class ULuaTableAsset*> TableAssets);
		bool LuaTableImplements(const struct FLuaValue& Table, class ULuaTableAsset* TableAsset);
		TArray<struct FLuaValue> LuaTableGetValues(const struct FLuaValue& Table);
		TArray<struct FLuaValue> LuaTableGetKeys(const struct FLuaValue& Table);
		struct FLuaValue LuaTableGetField(const struct FLuaValue& Table, const class FString& Key);
		struct FLuaValue LuaTableGetByIndex(const struct FLuaValue& Table, int32_t Index);
		struct FLuaValue LuaTableFromMap(class UObject* WorldContextObject, class UClass* State, TMap<class FString, struct FLuaValue> Map);
		void LuaTableFillObject(const struct FLuaValue& InTable, class UObject* InObject);
		struct FLuaValue LuaTableAssetToLuaTable(class UObject* WorldContextObject, class UClass* State, class ULuaTableAsset* TableAsset);
		void LuaStateReload(class UObject* WorldContextObject, class UClass* State);
		void LuaStateDestroy(class UObject* WorldContextObject, class UClass* State);
		void LuaSetUserDataMetaTable(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& MetaTable);
		void LuaSetGlobal(class UObject* WorldContextObject, class UClass* State, const class FString& Name, const struct FLuaValue& Value);
		void LuaRunURL(class UObject* WorldContextObject, class UClass* State, const class FString& URL, TMap<class FString, class FString> Headers, const class FString& SecurityHeader, const class FString& SignaturePublicExponent, const class FString& SignatureModulus, const class FScriptDelegate& Completed);
		struct FLuaValue LuaRunString(class UObject* WorldContextObject, class UClass* State, const class FString& CodeString, const class FString& CodePath);
		struct FLuaValue LuaRunNonContentFile(class UObject* WorldContextObject, class UClass* State, const class FString& Filename, bool bIgnoreNonExistent);
		struct FLuaValue LuaRunFile(class UObject* WorldContextObject, class UClass* State, const class FString& Filename, bool bIgnoreNonExistent);
		struct FLuaValue LuaRunCodeAsset(class UObject* WorldContextObject, class UClass* State, class ULuaCode* CodeAsset);
		struct FLuaValue LuaRunByteCode(class UObject* WorldContextObject, class UClass* State, TArray<unsigned char> ByteCode, const class FString& CodePath);
		struct FLuaValue LuaNewLuaUserDataObject(class UObject* WorldContextObject, class UClass* State, class UClass* UserDataObjectClass, bool bTrackObject);
		bool LuaLoadPakFile(const class FString& Filename, const class FString& Mountpoint, TArray<struct FLuaValue>* Assets, const class FString& ContentPath, const class FString& AssetRegistryPath);
		void LuaHttpRequest(class UObject* WorldContextObject, class UClass* State, const class FString& Method, const class FString& URL, TMap<class FString, class FString> Headers, const struct FLuaValue& Body, const struct FLuaValue& Context, const class FScriptDelegate& ResponseReceived, const class FScriptDelegate& Error);
		TArray<struct FLuaValue> LuaGlobalCallValueMulti(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		struct FLuaValue LuaGlobalCallValue(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		TArray<struct FLuaValue> LuaGlobalCallMulti(class UObject* WorldContextObject, class UClass* State, const class FString& Name, TArray<struct FLuaValue> Args);
		struct FLuaValue LuaGlobalCall(class UObject* WorldContextObject, class UClass* State, const class FString& Name, TArray<struct FLuaValue> Args);
		int32_t LuaGetUsedMemory(class UObject* WorldContextObject, class UClass* State);
		int32_t LuaGetTop(class UObject* WorldContextObject, class UClass* State);
		class ULuaState* LuaGetState(class UObject* WorldContextObject, class UClass* State);
		struct FLuaValue LuaGetGlobal(class UObject* WorldContextObject, class UClass* State, const class FString& Name);
		void LuaGCStop(class UObject* WorldContextObject, class UClass* State);
		void LuaGCRestart(class UObject* WorldContextObject, class UClass* State);
		void LuaGCCollect(class UObject* WorldContextObject, class UClass* State);
		struct FLuaValue LuaCreateUFunction(class UObject* InObject, const class FString& FunctionName);
		struct FLuaValue LuaCreateThread(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& Value);
		struct FLuaValue LuaCreateTable(class UObject* WorldContextObject, class UClass* State);
		struct FLuaValue LuaCreateString(const class FString& String);
		struct FLuaValue LuaCreateObjectInState(class UObject* WorldContextObject, class UClass* State, class UObject* InObject);
		struct FLuaValue LuaCreateObject(class UObject* InObject);
		struct FLuaValue LuaCreateNumber(float Value);
		struct FLuaValue LuaCreateNil();
		struct FLuaValue LuaCreateLazyTable(class UObject* WorldContextObject, class UClass* State);
		struct FLuaValue LuaCreateInteger(int32_t Value);
		struct FLuaValue LuaCreateBool(bool bInBool);
		struct FLuaValue LuaComponentGetField(const struct FLuaValue& LuaComponent, const class FString& Key);
		void GetLuaReflectionType(class UObject* InObject, const class FString& Name, ELuaReflectionType* LuaReflectionTypes);
		struct FLuaValue GetLuaComponentByStateAsLuaValue(class AActor* Actor, class UClass* State);
		struct FLuaValue GetLuaComponentByStateAndNameAsLuaValue(class AActor* Actor, class UClass* State, const class FString& Name);
		struct FLuaValue GetLuaComponentByNameAsLuaValue(class AActor* Actor, const class FString& Name);
		struct FLuaValue GetLuaComponentAsLuaValue(class AActor* Actor);
		struct FLuaValue Conv_TextToLuaValue(const class FText& Value);
		struct FLuaValue Conv_StringToLuaValue(const class FString& Value);
		struct FLuaValue Conv_ObjectToLuaValue(class UObject* Object);
		struct FLuaValue Conv_NameToLuaValue(const class FName& Value);
		class FText Conv_LuaValueToText(const struct FLuaValue& Value);
		class FString Conv_LuaValueToString(const struct FLuaValue& Value);
		class UObject* Conv_LuaValueToObject(const struct FLuaValue& Value);
		class FName Conv_LuaValueToName(const struct FLuaValue& Value);
		int32_t Conv_LuaValueToInt(const struct FLuaValue& Value);
		struct FVector Conv_LuaValueToFVector(const struct FLuaValue& Value);
		float Conv_LuaValueToFloat(const struct FLuaValue& Value);
		class UClass* Conv_LuaValueToClass(const struct FLuaValue& Value);
		bool Conv_LuaValueToBool(const struct FLuaValue& Value);
		struct FLuaValue Conv_IntToLuaValue(int32_t Value);
		struct FLuaValue Conv_FloatToLuaValue(float Value);
		struct FLuaValue Conv_BoolToLuaValue(bool Value);
		struct FLuaValue AssignLuaValueToLuaState(class UObject* WorldContextObject, const struct FLuaValue& Value, class UClass* State);
		static UClass* StaticClass();
	};

	/**
	 * Class LuaMachine.LuaBlueprintPackage
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class ULuaBlueprintPackage : public UObject
	{
	public:
		TMap<class FString, struct FLuaValue>                      Table;                                                   // 0x0028(0x0050) Edit, NativeAccessSpecifierPublic
		struct FLuaValue                                           SelfTable;                                               // 0x0078(0x0040) NativeAccessSpecifierPublic

	public:
		void ReceiveInit();
		struct FLuaValue GetSelfLuaTable();
		class UClass* GetLuaState();
		static UClass* StaticClass();
	};

	/**
	 * Class LuaMachine.LuaCode
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class ULuaCode : public UDataAsset
	{
	public:
		class FText                                                Code;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bCookAsBytecode;                                         // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TYH[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      ByteCode;                                                // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCooked;                                                 // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3DX[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LuaMachine.LuaComponent
	 * Size -> 0x00C0 (FullSize[0x0170] - InheritedSize[0x00B0])
	 */
	class ULuaComponent : public UActorComponent
	{
	public:
		class UClass*                                              LuaState;                                                // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FLuaValue>                      Table;                                                   // 0x00B8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FString, struct FLuaValue>                      MetaTable;                                               // 0x0108(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bLazy;                                                   // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogError;                                               // 0x0159(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImplicitSelf;                                           // 0x015A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXEE[0x5];                                   // 0x015B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLuaError;                                              // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool ReceiveLuaMetaNewIndex(const struct FLuaValue& Key, const struct FLuaValue& Value);
		struct FLuaValue ReceiveLuaMetaIndex(const struct FLuaValue& Key);
		void LuaSetField(const class FString& Name, const struct FLuaValue& Value);
		struct FLuaValue LuaGetField(const class FString& Name);
		class ULuaState* LuaComponentGetState();
		TArray<struct FLuaValue> LuaCallValueMultiIfNotNil(const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		TArray<struct FLuaValue> LuaCallValueMulti(const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		struct FLuaValue LuaCallValueIfNotNil(const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		struct FLuaValue LuaCallValue(const struct FLuaValue& Value, TArray<struct FLuaValue> Args);
		TArray<struct FLuaValue> LuaCallTableKeyMulti(const struct FLuaValue& InTable, const class FString& Key, TArray<struct FLuaValue> Args);
		struct FLuaValue LuaCallTableKey(const struct FLuaValue& InTable, const class FString& Key, TArray<struct FLuaValue> Args);
		TArray<struct FLuaValue> LuaCallTableIndexMulti(const struct FLuaValue& InTable, int32_t Index, TArray<struct FLuaValue> Args);
		struct FLuaValue LuaCallTableIndex(const struct FLuaValue& InTable, int32_t Index, TArray<struct FLuaValue> Args);
		TArray<struct FLuaValue> LuaCallFunctionMulti(const class FString& Name, TArray<struct FLuaValue> Args, bool bGlobal);
		struct FLuaValue LuaCallFunction(const class FString& Name, TArray<struct FLuaValue> Args, bool bGlobal);
		static UClass* StaticClass();
	};

	/**
	 * Class LuaMachine.LuaDelegate
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class ULuaDelegate : public UObject
	{
	public:
		unsigned char                                              UnknownData_0OI1[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		void LuaDelegateFunction();
		static UClass* StaticClass();
	};

	/**
	 * Class LuaMachine.LuaGlobalNameComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class ULuaGlobalNameComponent : public UActorComponent
	{
	public:
		class UClass*                                              LuaState;                                                // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LuaGlobalName;                                           // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LuaMachine.LuaMultiLineEditableTextBox
	 * Size -> 0x0AF8 (FullSize[0x0C20] - InheritedSize[0x0128])
	 */
	class ULuaMultiLineEditableTextBox : public UTextLayoutWidget
	{
	public:
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0128(0x07F8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     CodeStyle;                                               // 0x0920(0x0270) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        CommentColor;                                            // 0x0B90(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        StringColor;                                             // 0x0BA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        KeywordColor;                                            // 0x0BB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NilColor;                                                // 0x0BC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BasicColor;                                              // 0x0BD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        StdLibColor;                                             // 0x0BE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TabSize;                                                 // 0x0BF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsReadOnly;                                             // 0x0BF4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHandleTab;                                              // 0x0BF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHandleArrows;                                           // 0x0BF6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FCD[0x1];                                   // 0x0BF7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLuaCustomHighlighter>                       CustomTokensMapping;                                     // 0x0BF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4YH[0x18];                                  // 0x0C08(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& InText);
		void MoveCursorUp();
		void MoveCursorRight();
		void MoveCursorLeft();
		void MoveCursorDown();
		class FText GetText();
		class FText GetSelectedText();
		int32_t GetCursorLine();
		int32_t GetCursorColumn();
		void CursorGoTo(int32_t Line, int32_t Column);
		static UClass* StaticClass();
	};

	/**
	 * Class LuaMachine.LuaState
	 * Size -> 0x02C8 (FullSize[0x02F0] - InheritedSize[0x0028])
	 */
	class ULuaState : public UObject
	{
	public:
		class ULuaCode*                                            LuaCodeAsset;                                            // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LuaFilename;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FLuaValue>                      Table;                                                   // 0x0040(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FString, class UClass*>                         LuaBlueprintPackagesTable;                               // 0x0090(0x0050) Edit, UObjectWrapper, NativeAccessSpecifierPublic
		TMap<class FString, class ULuaCode*>                       RequireTable;                                            // 0x00E0(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       bLuaOpenLibs;                                            // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLuaLibsLoader                                      LuaLibsLoader;                                           // 0x0131(0x0009) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAddProjectContentDirToPackagePath;                      // 0x013A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VN1W[0x5];                                   // 0x013B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      AppendProjectContentDirSubDir;                           // 0x0140(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              OverridePackagePath;                                     // 0x0150(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OverridePackageCPath;                                    // 0x0160(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULuaCode*                                            UserDataMetaTableFromCodeAsset;                          // 0x0170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogError;                                               // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPersistent;                                             // 0x0179(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableLineHook;                                         // 0x017A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCallHook;                                         // 0x017B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableReturnHook;                                       // 0x017C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37ML[0x3];                                   // 0x017D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class ULuaBlueprintPackage*>           LuaBlueprintPackages;                                    // 0x0180(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B43Z[0x10];                                  // 0x01D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULuaUserDataObject*>                          TrackedLuaUserDataObjects;                               // 0x01E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IV7O[0x30];                                  // 0x01F0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRawLuaFunctionCall;                                     // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0R6[0x67];                                  // 0x0221(0x0067) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<TWeakObjectPtr<class UObject>, struct FLuaDelegateGroup> LuaDelegatesMap;                                         // 0x0288(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BGPY[0x18];                                  // 0x02D8(0x0018) MISSED OFFSET (PADDING)

	public:
		TArray<unsigned char> ToByteCode(const class FString& Code, const class FString& CodePath, class FString* ErrorString);
		struct FLuaValue StructToLuaTable(class UScriptStruct* InScriptStruct, TArray<unsigned char> StructData);
		bool SetPropertyFromLuaValue(class UObject* InObject, const class FString& PropertyName, const struct FLuaValue& Value);
		void SetLuaUserDataField(const struct FLuaValue& UserData, const class FString& Key, const struct FLuaValue& Value);
		void ReceiveLuaStatePreInitialized();
		void ReceiveLuaStateInitialized();
		void ReceiveLuaReturnHook(const struct FLuaDebug& LuaDebug);
		void ReceiveLuaLineHook(const struct FLuaDebug& LuaDebug);
		void ReceiveLuaLevelRemovedFromWorld(class ULevel* Level, class UWorld* World);
		void ReceiveLuaLevelAddedToWorld(class ULevel* Level, class UWorld* World);
		void ReceiveLuaError(const class FString& Message);
		void ReceiveLuaCallHook(const struct FLuaDebug& LuaDebug);
		struct FLuaValue NewLuaUserDataObject(class UClass* LuaUserDataObjectClass, bool bTrackObject);
		TMap<class FString, struct FLuaValue> LuaGetLocals(int32_t Level);
		struct FLuaDebug LuaGetInfo(int32_t Level);
		class UClass* GetSelfLuaState();
		struct FLuaValue GetLuaValueFromProperty(class UObject* InObject, const class FString& PropertyName);
		struct FLuaValue GetLuaUserDataField(const struct FLuaValue& UserData, const class FString& Key);
		struct FLuaValue GetLuaBlueprintPackageTable(const class FString& PackageName);
		static UClass* StaticClass();
	};

	/**
	 * Class LuaMachine.LuaTableAsset
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class ULuaTableAsset : public UDataAsset
	{
	public:
		TMap<class FString, struct FLuaValue>                      Table;                                                   // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LuaMachine.LuaUserDataObject
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class ULuaUserDataObject : public UObject
	{
	public:
		TMap<class FString, struct FLuaValue>                      Table;                                                   // 0x0028(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, struct FLuaValue>                      MetaTable;                                               // 0x0078(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bImplicitSelf;                                           // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZNR[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		struct FLuaValue UFunctionToLuaValue(const class FString& FunctionName);
		void ReceiveLuaUserDataTableInit();
		struct FLuaValue ReceiveLuaMetaIndex(const struct FLuaValue& Key);
		void ReceiveLuaGC();
		void LuaSetField(const class FString& Name, const struct FLuaValue& Value);
		struct FLuaValue LuaGetField(const class FString& Name);
		struct FLuaValue LuaCallFunction(const class FString& Name, TArray<struct FLuaValue> Args, bool bGlobal);
		TArray<class FString> GetObjectUFunctions(bool bOnlyPublic);
		class ULuaState* GetLuaStateInstance();
		class UClass* GetLuaState();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
