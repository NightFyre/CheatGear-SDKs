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
	 * BlueprintGeneratedClass BP_WeaponMaterialWear_04_VeryRare.BP_WeaponMaterialWear_04_VeryRare_C
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBP_WeaponMaterialWear_04_VeryRare_C : public UBP_WeaponMaterialWear_00_Master_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0070(0x0008) Transient, DuplicateTransient

	public:
		void OnInitializeBalanceState(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
		void OnInitializeComponent(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
		void OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState);
		void ExecuteUbergraph_BP_WeaponMaterialWear_04_VeryRare(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
