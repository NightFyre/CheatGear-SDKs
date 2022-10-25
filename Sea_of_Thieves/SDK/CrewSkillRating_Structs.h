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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CrewSkillRating.ReportMatchConclusionResponse
	 * Size -> 0x0008
	 */
	struct FReportMatchConclusionResponse
	{
	public:
		int32_t                                                    WinningCrewNewSkillValue;                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LosingCrewNewSkillValue;                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CrewSkillRating.ReportMatchConclusionRequest
	 * Size -> 0x0020
	 */
	struct FReportMatchConclusionRequest
	{
	public:
		TArray<class FString>                                      WinningUserIds;                                          // 0x0000(0x0010) ZeroConstructor
		TArray<class FString>                                      LosingUserIds;                                           // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct CrewSkillRating.GetPvPSkillForCrewResponseModel
	 * Size -> 0x0004
	 */
	struct FGetPvPSkillForCrewResponseModel
	{
	public:
		int32_t                                                    CrewSkillRating;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CrewSkillRating.GetPvPSkillForCrewRequestModel
	 * Size -> 0x0010
	 */
	struct FGetPvPSkillForCrewRequestModel
	{
	public:
		TArray<class FString>                                      CrewMemberIds;                                           // 0x0000(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
