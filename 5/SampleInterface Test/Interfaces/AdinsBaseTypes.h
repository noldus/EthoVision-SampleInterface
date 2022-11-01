//----------------------------------------------------------------------------
// N O L D U S   I N F O R M A T I O N   T E C H N O L O G Y   B . V .
//----------------------------------------------------------------------------
// Project    :   Common
// Module     :   Interface
// File       :   AdinsBaseTypes.h
//----------------------------------------------------------------------------
// Note       :  Copyright (c) 2022 Noldus information technology  b.v.
//               Noldus reserves the right to change the interface with EthoVision XT 
//               without notice.
//----------------------------------------------------------------------------
// Note       : shared TRUE_TYPEDEF's around frequent used VTS domain types
//----------------------------------------------------------------------------
#ifndef ADINSBASETYPES_H
#define ADINSBASETYPES_H

#pragma once

#include "noldus debug\ncdbgtypedef.h"  // NOTE: 'noldus debug' dependent
#include <vector>


namespace Adins
{
    TRUE_TYPEDEF(long, TrialId);
    TRUE_TYPEDEF(long, ArenaId);
    TRUE_TYPEDEF(long, ZoneId);
    TRUE_TYPEDEF(long, PoiId);
    TRUE_TYPEDEF(long, SubjectId);

    TRUE_TYPEDEF(long, RuleId);
    TRUE_TYPEDEF(long, ConditionId);
    TRUE_TYPEDEF(long, ActionId);
    TRUE_TYPEDEF(long, OperatorId);
    TRUE_TYPEDEF(long, ReferenceId);
    TRUE_TYPEDEF(long, VariableId);

    TRUE_TYPEDEF(long, DeviceTypeId);
    TRUE_TYPEDEF(long, DeviceId);
    TRUE_TYPEDEF(long, CommandId);
    TRUE_TYPEDEF(long, SignalId);
    TRUE_TYPEDEF(long, ArgumentId);
    TRUE_TYPEDEF(long, ArgumentRangeId);
    TRUE_TYPEDEF(long, UnitId);
    
    TRUE_TYPEDEF(long, BehaviorGroupId);
    TRUE_TYPEDEF(long, BehaviorId);
    TRUE_TYPEDEF(long, AbrBehaviorId);
    
    TRUE_TYPEDEF(long, ArenaSetupId);
    TRUE_TYPEDEF(long, TrialControlProfileId);
    TRUE_TYPEDEF(long, DetectionProfileId);
    
    
    inline constexpr TrialId                g_idTrialInvalid                (-1l);
    inline constexpr ArenaId                g_idArenaInvalid                (-1l);
    inline constexpr ZoneId                 g_idZoneInvalid                 (-1l);
    inline constexpr PoiId                  g_idPoiInvalid                  (-1l);
    inline constexpr SubjectId              g_idSubjectInvalid              (-1l);
        
    inline constexpr RuleId                 g_idRuleInvalid                 (-1l);
    inline constexpr ConditionId            g_idConditionInvalid            (-1l);
    inline constexpr ActionId               g_idActionInvalid               (-1l);
    inline constexpr OperatorId             g_idOperatorInvalid             (-1l);
    inline constexpr ReferenceId            g_idReferenceInvalid            (-1l);
    inline constexpr VariableId             g_idVariableInvalid             (-1l);
    inline constexpr RuleId                 g_idRuleStartStop               (0l);
    inline constexpr ActionId               g_idActionStartRecording        (0l);
    inline constexpr ActionId               g_idActionStopRecording         (1l);

    inline constexpr DeviceTypeId           g_idDeviceTypeInvalid           (-1l);
    inline constexpr DeviceId               g_idDeviceInvalid               (-1l);
    inline constexpr CommandId              g_idCommandInvalid              (-1l);
    inline constexpr SignalId               g_idSignalInvalid               (-1l);
    inline constexpr ArgumentId             g_idArgumentInvalid             (-1l);
    inline constexpr ArgumentRangeId        g_idArgumentRangeInvalid        (-1l);
    inline constexpr UnitId                 g_idUnitInvalid                 (-1l);
    
    inline constexpr BehaviorGroupId        g_idBehaviorGroupInvalid        (-1l);
    inline constexpr BehaviorId             g_idBehaviorInvalid             (-1l);
    inline constexpr AbrBehaviorId          g_idAbrBehaviorInvalid          (-1l);
    
    inline constexpr ArenaSetupId           g_idArenaSetupInvalid           (-1l);
    inline constexpr TrialControlProfileId  g_idTrialControlProfileInvalid  (-1l);
    inline constexpr DetectionProfileId     g_idDetectionProfileInvalid     (-1l);


    struct TrackSetId
    {
        TrialId     m_idTrial       = g_idTrialInvalid;
        ArenaId     m_idArena       = g_idArenaInvalid;
    };

    struct TrackId
    {
        TrialId     m_idTrial       = g_idTrialInvalid;
        ArenaId     m_idArena       = g_idArenaInvalid;
        SubjectId   m_idSubject     = g_idSubjectInvalid;
    };

    struct MerEventId
    {
        ArenaId     m_idArena       = g_idArenaInvalid;
        SubjectId   m_idSubject     = g_idSubjectInvalid;
        BehaviorId  m_idBehavior    = g_idBehaviorInvalid;
    };


    using ArenaIdVector     = std::vector<ArenaId>;
    using ZoneIdVector      = std::vector<ZoneId>;
    using PoiIdVector       = std::vector<PoiId>;
    using SubjectIdVector   = std::vector<SubjectId>;

    using RuleIdVector      = std::vector<RuleId>;
    using ConditionIdVector = std::vector<ConditionId>;
    using ActionIdVector    = std::vector<ActionId>;
    using OperatorIdVector  = std::vector<OperatorId>;
    using ReferenceIdVector = std::vector<ReferenceId>;
    using VariableIdVector  = std::vector<VariableId>;

    using DeviceIdVector    = std::vector<Adins::DeviceId>;
    using BehaviorIdVector  = std::vector<BehaviorId>;
}

#endif //ADINSBASETYPES_H
