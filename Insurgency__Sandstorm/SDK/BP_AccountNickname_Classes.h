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
	 * WidgetBlueprintGeneratedClass BP_AccountNickname.BP_AccountNickname_C
	 * Size -> 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
	 */
	class UBP_AccountNickname_C : public UAccountNickname
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          Nickname;                                                // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void BP_OnAccountChanged(int32_t ActiveControllerId);
		void ExecuteUbergraph_BP_AccountNickname(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
