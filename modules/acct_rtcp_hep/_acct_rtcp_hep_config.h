static struct hep_ctx ctx = {
        .initfails = 0,
        .hints = {{ .ai_socktype = SOCK_DGRAM }},
        .capt_host  = "10.0.0.1",
        .capt_port  = "9060",
        .capt_id = 101,
        .hep_version = 3,
        .usessl = 0,
        .pl_compress = 0,
        .sendPacketsCount = 0
};
