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
	 * BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
	 * Size -> 0x0009 (FullSize[0x01F9] - InheritedSize[0x01F0])
	 */
	class UBP_GameInstance_C : public UGBGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bHostGameInvitePromptPending;                            // 0x01F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UUserWidget* CreateDefaultLoadingScreenWidget(const class FString& MapName);
		void CheckHostGameInvitePrompt();
		void ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
