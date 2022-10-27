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
	 * Class GbxProbes.GbxProbesBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxProbesBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ResolveGbxProbeId(class UObject* InObj, const struct FGameplayTag& InTag, struct FGbxProbeId* OutId, bool* IsValid);
		void STATIC_MakeProbeId(const class FString& Class, const class FString& Type, const class FString& SubType, struct FGbxProbeId* OutId);
		void STATIC_IsValidId(const struct FGbxProbeId& ProbeId, bool* IsValid);
		void STATIC_IsTestProbeEnabled(const struct FGbxProbeId& ProbeId, const class FName& Test, bool* IsEnabled);
		void STATIC_IsTestEnabled(const class FName& Test, bool* IsEnabled);
		void STATIC_IsClassEnabled(const class FName& Class, bool* IsEnabled);
		void STATIC_FlushPendingTestProbes();
		void STATIC_EmitTestProbeResultWithData(const struct FGbxProbeId& ProbeId, const class FName& Test, EGbxProbeResult Result, TArray<struct FGbxProbeExtraData> ExtraDataArray);
		void STATIC_EmitTestProbeResult(const struct FGbxProbeId& ProbeId, const class FName& Test, EGbxProbeResult Result, const class FString& ExtraData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
