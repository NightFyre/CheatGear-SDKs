#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BPFL_DebugUtils.BPFL_DebugUtils_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_DebugUtils_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PrintFloat(const class FString& Name, float InFloat, const struct FLinearColor& TextColor, class UObject* __WorldContext);
		void STATIC_PrintInt(const class FString& Name, int32_t InInteger, const struct FLinearColor& TextColor, class UObject* __WorldContext);
		void STATIC_PrintBool(const class FString& Name, bool bInBool, const struct FLinearColor& TextColor, class UObject* __WorldContext);
		void STATIC_PrintStr(const class FString& Name, const class FString& Value, const struct FLinearColor& TextColor, class UObject* __WorldContext);
		void STATIC_PrintProperty(const class FString& PropName, const class FString& Value, const struct FLinearColor& TextColor, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
