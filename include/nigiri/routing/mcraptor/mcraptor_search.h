#pragma once

#include "nigiri/routing/raptor/raptor.h"
#include "nigiri/routing/search.h"
#include "nigiri/timetable.h"

namespace nigiri::routing {

routing_result<raptor_stats> mcraptor_search(
    timetable const& tt,
    rt_timetable const* rtt,
    search_state& s_state,
    raptor_state& r_state,
    query q,
    direction search_dir,
    std::optional<std::chrono::seconds> timeout = std::nullopt);

bool results_are_equal(timetable const& tt,
                       routing_result<raptor_stats> const& result_1,
                       routing_result<raptor_stats> const& result_2);

}  // namespace nigiri::routing
