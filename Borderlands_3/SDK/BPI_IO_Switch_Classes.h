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
	 * BlueprintGeneratedClass BPI_IO_Switch.BPI_IO_Switch_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_IO_Switch_C : public UInterface
	{
	public:
		void GetSwitchFeedbackState(Enum_States_SwitchFeedback* FeedbackState);
		void SetSwitchFeedbackState(Enum_States_SwitchFeedback FeedbackState);
		void GetSwitchInteractiveState(bool* Interactive);
		void GetSwitchLockedState(bool* Locked);
		void GetSwitchState(Enum_Switch_State* SwitchState);
		void SetSwitchInteractiveState(bool Interactive);
		void SetSwitchLockedState(bool Locked);
		void SetSwitchState(Enum_Switch_State SwitchState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
