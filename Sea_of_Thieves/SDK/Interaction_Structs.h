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
	 * Enum Interaction.EInteractionBlockReason
	 */
	enum class EInteractionBlockReason : uint8_t
	{
		None   = 0,
		Radial = 1,
		Other  = 2,
		MAX    = 3
	};

	/**
	 * Enum Interaction.EInteractableIdentifier
	 */
	enum class EInteractableIdentifier : uint8_t
	{
		None    = 0,
		Capstan = 1,
		Cannon  = 2,
		Harpoon = 3,
		Sail    = 4,
		Wheel   = 5,
		MAX     = 6,
		MAX01   = 7
	};

	/**
	 * Enum Interaction.EInteractionObject
	 */
	enum class EInteractionObject : uint8_t
	{
		None             = 0,
		Shop             = 1,
		Chest            = 2,
		Barrel           = 3,
		CaptainsBookcase = 4,
		MAX              = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Interaction.EventOptimalInteractionObjectChanged
	 * Size -> 0x0010
	 */
	struct FEventOptimalInteractionObjectChanged
	{
	public:
		class UObject*                                             PreviousFocusObject;                                     // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             NewFocusObject;                                          // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Interaction.EventInteractionBlockingStateChanged
	 * Size -> 0x0002
	 */
	struct FEventInteractionBlockingStateChanged
	{
	public:
		bool                                                       IsInteractionBlocked;                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		EInteractionBlockReason                                    InteractionBlockReason;                                  // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
