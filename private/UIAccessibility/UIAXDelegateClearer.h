//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIAXDelegateClearer : NSObject
{
    id delegatee;
    id delegate;
    SEL clearMethod;
    NSString *key;
}

@property(retain, nonatomic) NSString *key; // @synthesize key;
@property(nonatomic) SEL clearMethod; // @synthesize clearMethod;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(nonatomic) id delegatee; // @synthesize delegatee;
- (void)dealloc;

@end

