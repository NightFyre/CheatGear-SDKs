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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ConsoleCertificationRequirements.EUserPrivilegeResult
	 */
	enum class EUserPrivilegeResult : uint8_t
	{
		NoFailure             = 0,
		AccountTypeFailure    = 1,
		AgeRestrictionFailure = 2,
		OnlinePlayRestricted  = 3,
		GenericFailure        = 4,
		WaitingDialog         = 5,
		LicenseAgreement      = 6,
		ReturningMainMenu     = 7,
		ChatRestricted        = 8,
		JoinSessionFull       = 9,
		MAX                   = 10
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
