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
	 * WidgetBlueprintGeneratedClass BP_ObjectiveIconBase.BP_ObjectiveIconBase_C
	 * Size -> 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
	 */
	class UBP_ObjectiveIconBase_C : public UObjectiveIcon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_BP_ObjectiveIconBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
