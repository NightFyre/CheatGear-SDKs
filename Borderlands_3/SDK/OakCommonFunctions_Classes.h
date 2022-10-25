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
	 * BlueprintGeneratedClass OakCommonFunctions.OakCommonFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOakCommonFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_Bitmask_EnumArrayToInt(TArray<unsigned char>* Enum, class UObject* __WorldContext, int32_t* Bitmask);
		void STATIC_Bitmask_EnumToInt(unsigned char Enum, class UObject* __WorldContext, int32_t* Bitmask);
		void STATIC_Bitmask_RandomEnum(int32_t BitmaskInt, class UObject* __WorldContext, unsigned char* RandomEnum);
		void STATIC_CheckChallengeArrayStatus(TArray<class UClass*>* Challenge_Array, class APlayerController* Chracter_Controller, class UObject* __WorldContext, TArray<class UClass*>* Completed_Challenges_Array);
		void STATIC_CheckChallengeStatus(class APlayerController* CharacterController, class UClass* Challenge, class UObject* __WorldContext, bool* Complete);
		void STATIC_ChallengeComplete_AllPlayers(class UClass* Challenge, class UObject* __WorldContext);
		void STATIC_ChallengeActivate_AllPlayers(class UClass* Challenge, class UObject* __WorldContext);
		void STATIC_ChallengeComplete(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext);
		void STATIC_ChallengeActivate(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext);
		void STATIC_Cosh(float A, class UObject* __WorldContext, float* result);
		void STATIC_SetMissionDoorState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext);
		void STATIC_SetMissionSwitchState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext);
		void STATIC_SetDebugConsoleCommands(class APlayerController* PlayerController, bool Stat_Unit, bool Stat_FPS, bool ShowDebug_Missions, bool ToggleAllScreenMessages, bool BalanceMe, bool NoTarget, bool God, bool Demigod, bool Loaded, bool AllAmmo, class UObject* __WorldContext);
		void STATIC_MissionTempHudText(class UObject* WorldContextObject, const class FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, class UObject* __WorldContext);
		void STATIC_MissionTempSpeakText(class UObject* WorldContextObject, class UClass* ActorClass, const class FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer, class UObject* __WorldContext);
		void STATIC_DisplayErrorMessage(class UObject* Context, const class FString& ErrorMessage, class UObject* __WorldContext);
		void STATIC_Compare_Damage_Source(class UDamageSource* Damage_Source, class UClass* Damage_Source2, class UObject* __WorldContext, bool* Equal, bool* Not_Equal);
		void STATIC_Make_Transforms_Around_Cone(const struct FVector& Cone_Axis, const struct FVector& Cone_Location, float Cone_Angle_Min, float Cone_Angle_Max, float Rotation_Angle_Divergence, float Sweep_Angle, float Distance_From_Cone_Center, int32_t Number_Of_Transforms, class UObject* __WorldContext, TArray<struct FTransform>* Out_Transforms);
		void STATIC_Get_Player_View_Trace(class AOakCharacter_Player* Player_Character, float Trace_Length, class UObject* __WorldContext, struct FVector* Trace_Start, struct FVector* Trace_End);
		void STATIC_Get_Regeneration_Rate(class UObject* Context, float Max_Regen_Rate, class UObject* __WorldContext, float* Regen_Rate);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
