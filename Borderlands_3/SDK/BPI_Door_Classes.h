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
	 * BlueprintGeneratedClass BPI_Door.BPI_Door_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Door_C : public UInterface
	{
	public:
		void GetDoorFeedbackState(Enum_States_DoorLocked* FeedbackState);
		void SetDoorFeedbackState(Enum_States_DoorLocked FeedbackState);
		void GetDoorInteractiveState(bool* Interactive);
		void GetDoorLockedState(bool* Locked);
		void GetDoorState(Enum_Door_State* DoorState);
		void SetDoorInteractiveState(bool Interactive);
		void SetDoorLockedState(bool Locked);
		void SetDoorState(Enum_Door_State DoorState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
