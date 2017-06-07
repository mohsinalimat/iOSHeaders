//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/CHSynchronizable.h>

@interface CHLogServer : CHSynchronizable
{
    struct unordered_map<const char *, os_log_s *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, os_log_s *>>> fLogHandles;
}

+ (id)instance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)createLogHandleForDomainSync:(const char *)arg1;
- (struct os_log_s *)logHandleForDomainSync:(const char *)arg1;
- (struct os_log_s *)logHandleForDomain:(const char *)arg1;
- (id)init;

@end

