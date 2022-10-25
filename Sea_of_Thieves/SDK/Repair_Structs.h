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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Repair.ERepairableState
	 */
	enum class ERepairableState : uint8_t
	{
		NeverDamaged  = 0,
		Repairable    = 1,
		Repairing     = 2,
		Repaired      = 3,
		UndoingRepair = 4,
		MAX           = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Repair.EventRepairableObjectRepairEndedEvent
	 * Size -> 0x0028
	 */
	struct FEventRepairableObjectRepairEndedEvent
	{
	public:
		class UObject*                                             Repairable;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Position;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5FR7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              RepairerActor;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RepairPercentage;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H4AH[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Repair.EventRepairableObjectDestroyed
	 * Size -> 0x0001
	 */
	struct FEventRepairableObjectDestroyed
	{
	public:
		unsigned char                                              UnknownData_X1HG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Repair.EventPlayerUndoRepairEnd
	 * Size -> 0x0008
	 */
	struct FEventPlayerUndoRepairEnd
	{
	public:
		unsigned char                                              UnknownData_1HR1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Repair.EventPlayerUndoRepairCompleted
	 * Size -> 0x0008
	 */
	struct FEventPlayerUndoRepairCompleted
	{
	public:
		unsigned char                                              UnknownData_YZJ8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Repair.EventPlayerUndoRepairStart
	 * Size -> 0x0008
	 */
	struct FEventPlayerUndoRepairStart
	{
	public:
		unsigned char                                              UnknownData_V4E4[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Repair.ShipPartDamagePersistenceModel
	 * Size -> 0x0020
	 */
	struct FShipPartDamagePersistenceModel : public FPersistenceModel
	{
	public:
		TArray<ERepairableState>                                   ComponentRepairableStates;                               // 0x0000(0x0010) ZeroConstructor
		class FString                                              Identifier;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
