//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@protocol NTKUpNextElementActionDelegate;

@interface NTKUpNextElementAction : NSObject <NSCopying>
{
    id <NTKUpNextElementActionDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didFinish:(_Bool)arg1;
- (void)_performWithContext:(id)arg1;
@property(nonatomic) __weak id <NTKUpNextElementActionDelegate> delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

