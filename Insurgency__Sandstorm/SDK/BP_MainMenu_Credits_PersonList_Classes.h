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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_Credits_PersonList.BP_MainMenu_Credits_PersonList_C
	 * Size -> 0x0031 (FullSize[0x0261] - InheritedSize[0x0230])
	 */
	class UBP_MainMenu_Credits_PersonList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        PersonList;                                              // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FText>                                        PersonNamesText;                                         // 0x0240(0x0010) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class FText>                                        PersonRolesText;                                         // 0x0250(0x0010) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bUsesRoleDescriptions;                                   // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_MainMenu_Credits_PersonList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
