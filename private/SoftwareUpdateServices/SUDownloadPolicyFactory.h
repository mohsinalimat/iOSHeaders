//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SUDownloadPolicyFactory : NSObject
{
}

+ (int)downloadPolicyTypeForClass:(id)arg1;
+ (id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2;
+ (id)userDownloadPolicyForDescriptor:(id)arg1;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2;
+ (id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3;

@end

