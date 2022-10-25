#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Size -> 0x0218 (FullSize[0x0240] - InheritedSize[0x0028])
	 */
	class URigVM : public UObject
	{
	public:
		struct FRigVMMemoryContainer                               WorkMemory;                                              // 0x0028(0x00A0) NativeAccessSpecifierPublic
		struct FRigVMMemoryContainer                               LiteralMemory;                                           // 0x00C8(0x00A0) NativeAccessSpecifierPublic
		struct FRigVMByteCode                                      ByteCode;                                                // 0x0168(0x0010) NativeAccessSpecifierPublic
		struct FRigVMInstructionArray                              Instructions;                                            // 0x0178(0x0010) Transient, NativeAccessSpecifierPrivate
		TArray<class FName>                                        FunctionNames;                                           // 0x0188(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L2VI[0x10];                                  // 0x0198(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigVMParameter>                             Parameters;                                              // 0x01A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 ParametersNameMap;                                       // 0x01B8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4LUV[0x38];                                  // 0x0208(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32_t InArrayIndex);
		void SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32_t InArrayIndex);
		void SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32_t InArrayIndex);
		void SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32_t InArrayIndex);
		void SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32_t InArrayIndex);
		void SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32_t InArrayIndex);
		void SetParameterValueInt(const class FName& InParameterName, int32_t InValue, int32_t InArrayIndex);
		void SetParameterValueFloat(const class FName& InParameterName, float InValue, int32_t InArrayIndex);
		void SetParameterValueBool(const class FName& InParameterName, bool InValue, int32_t InArrayIndex);
		class FString GetRigVMFunctionName(int32_t InFunctionIndex);
		struct FVector2D GetParameterValueVector2D(const class FName& InParameterName, int32_t InArrayIndex);
		struct FVector GetParameterValueVector(const class FName& InParameterName, int32_t InArrayIndex);
		struct FTransform GetParameterValueTransform(const class FName& InParameterName, int32_t InArrayIndex);
		class FString GetParameterValueString(const class FName& InParameterName, int32_t InArrayIndex);
		struct FQuat GetParameterValueQuat(const class FName& InParameterName, int32_t InArrayIndex);
		class FName GetParameterValueName(const class FName& InParameterName, int32_t InArrayIndex);
		int32_t GetParameterValueInt(const class FName& InParameterName, int32_t InArrayIndex);
		float GetParameterValueFloat(const class FName& InParameterName, int32_t InArrayIndex);
		bool GetParameterValueBool(const class FName& InParameterName, int32_t InArrayIndex);
		int32_t GetParameterArraySize(const class FName& InParameterName);
		bool Execute();
		int32_t AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
