//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol LSInstallationServiceProtocol <NSObject>
- (void)uninstallApplication:(NSString *)arg1 withOptions:(NSDictionary *)arg2 uninstallType:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)installApplication:(NSString *)arg1 atURL:(NSURL *)arg2 withOptions:(NSDictionary *)arg3 installType:(unsigned long long)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
@end

