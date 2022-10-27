#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Class RigVM.RigVM
	 * Size -> 0x0298 (FullSize[0x02C0] - InheritedSize[0x0028])
	 */
	class URigVM : public UObject
	{
	public:
		class URigVMMemoryStorage*                                 WorkMemoryStorageObject;                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URigVMMemoryStorage*                                 LiteralMemoryStorageObject;                              // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URigVMMemoryStorage*                                 DebugMemoryStorageObject;                                // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMS0[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMByteCode                                      ByteCodeStorage;                                         // 0x0060(0x0030) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B48T[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMInstructionArray                              Instructions;                                            // 0x0098(0x0010) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O1IB[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMExecuteContext                                Context;                                                 // 0x00B0(0x00C0) Transient, NativeAccessSpecifierPrivate
		uint32_t                                                   NumExecutions;                                           // 0x0170(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YXOV[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FunctionNamesStorage;                                    // 0x0178(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_29T2[0x20];                                  // 0x0188(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigVMParameter>                             Parameters;                                              // 0x01A8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 ParametersNameMap;                                       // 0x01B8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4FG1[0x98];                                  // 0x0208(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URigVM*                                              DeferredVMToCopy;                                        // 0x02A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I618[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32_t InArrayIndex);
		void SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32_t InArrayIndex);
		void SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32_t InArrayIndex);
		void SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32_t InArrayIndex);
		void SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32_t InArrayIndex);
		void SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32_t InArrayIndex);
		void SetParameterValueInt(const class FName& InParameterName, int32_t InValue, int32_t InArrayIndex);
		void SetParameterValueFloat(const class FName& InParameterName, float InValue, int32_t InArrayIndex);
		void SetParameterValueDouble(const class FName& InParameterName, double InValue, int32_t InArrayIndex);
		void SetParameterValueBool(const class FName& InParameterName, bool InValue, int32_t InArrayIndex);
		struct FRigVMStatistics GetStatistics();
		class FString GetRigVMFunctionName(int32_t InFunctionIndex);
		struct FVector2D GetParameterValueVector2D(const class FName& InParameterName, int32_t InArrayIndex);
		struct FVector GetParameterValueVector(const class FName& InParameterName, int32_t InArrayIndex);
		struct FTransform GetParameterValueTransform(const class FName& InParameterName, int32_t InArrayIndex);
		class FString GetParameterValueString(const class FName& InParameterName, int32_t InArrayIndex);
		struct FQuat GetParameterValueQuat(const class FName& InParameterName, int32_t InArrayIndex);
		class FName GetParameterValueName(const class FName& InParameterName, int32_t InArrayIndex);
		int32_t GetParameterValueInt(const class FName& InParameterName, int32_t InArrayIndex);
		float GetParameterValueFloat(const class FName& InParameterName, int32_t InArrayIndex);
		double GetParameterValueDouble(const class FName& InParameterName, int32_t InArrayIndex);
		bool GetParameterValueBool(const class FName& InParameterName, int32_t InArrayIndex);
		bool Execute(const class FName& InEntryName);
		int32_t AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName);
		static UClass* StaticClass();
	};

	/**
	 * Class RigVM.RigVMMemoryStorageGeneratorClass
	 * Size -> 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
	 */
	class URigVMMemoryStorageGeneratorClass : public UClass
	{
	public:
		unsigned char                                              UnknownData_BJQP[0x38];                                  // 0x0230(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RigVM.RigVMMemoryStorage
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URigVMMemoryStorage : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
