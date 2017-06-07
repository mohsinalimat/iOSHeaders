//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCMContainerManager : NSObject
{
}

+ (id)defaultManager;
- (_Bool)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id *)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (_Bool)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id *)arg3;
- (id)deleteContainers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)temporaryContainersWithClass:(long long)arg1 error:(id *)arg2;
- (id)containersWithClass:(long long)arg1 error:(id *)arg2;
- (id)temporaryContainerWithContentClass:(long long)arg1 identifier:(id)arg2 existed:(_Bool *)arg3 error:(id *)arg4;
- (id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 createIfNecessary:(_Bool)arg3 existed:(_Bool *)arg4 error:(id *)arg5;
- (id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)_containersWithClass:(long long)arg1 temporary:(_Bool)arg2 error:(id *)arg3;

@end

