//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoVision/NSCopying-Protocol.h>

@class NSString;

@interface PVObject : NSObject <NSCopying>
{
    long long _modelId;
    NSString *_localIdentifier;
}

@property(readonly, copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) long long modelId; // @synthesize modelId=_modelId;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModelId:(long long)arg1 localIdentifier:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1;
- (id)initWithObject:(id)arg1;

@end

