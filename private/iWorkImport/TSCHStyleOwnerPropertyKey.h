//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSCHStyleOwnerPath;

__attribute__((visibility("hidden")))
@interface TSCHStyleOwnerPropertyKey : NSObject <NSCopying>
{
    TSCHStyleOwnerPath *mStyleOwnerPath;
    int mProperty;
}

+ (id)propertyKeyWithStyleOwnerPath:(id)arg1 property:(int)arg2;
@property(readonly, nonatomic) int property; // @synthesize property=mProperty;
@property(readonly, nonatomic) TSCHStyleOwnerPath *styleOwnerPath; // @synthesize styleOwnerPath=mStyleOwnerPath;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyleOwnerPath:(id)arg1 property:(int)arg2;

@end

