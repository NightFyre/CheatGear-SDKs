#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class Repair.RepairTypeId
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class URepairTypeId : public UObject
	{
	public:
		class FText                                                DisplayName;                                             // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_EONT[0x20];                                  // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Repair.RepairableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URepairableInterface : public UInterface
	{
	public:
		void HandleDestroy();
		float GetUndoRepairTime(class AActor* Interactor);
		class UClass* GetRepairType();
		float GetRepairTime();
		ERepairableState GetRepairableState();
		static UClass* StaticClass();
	};

	/**
	 * Class Repair.RepairingInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URepairingInterface : public UInterface
	{
	public:
		class UClass* GetRepairType();
		static UClass* StaticClass();
	};

	/**
	 * Class Repair.WoodRepairTypeId
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UWoodRepairTypeId : public URepairTypeId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Repair.ShipRepairInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShipRepairInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
