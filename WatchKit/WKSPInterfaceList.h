//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/WKSPInterfaceObject.h>

@class NSArray, NSDictionary, WKInterfaceController;

@interface WKSPInterfaceList : WKSPInterfaceObject
{
    NSArray *_rowControllers;
    NSDictionary *_rowDescriptions;
    WKInterfaceController *_controller;
    NSArray *_rowControllerProperties;
}

@property(retain, nonatomic) NSArray *rowControllerProperties; // @synthesize rowControllerProperties=_rowControllerProperties;
@property(nonatomic) __weak WKInterfaceController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSDictionary *rowDescriptions; // @synthesize rowDescriptions=_rowDescriptions;
@property(copy, nonatomic) NSArray *rowControllers; // @synthesize rowControllers=_rowControllers;
- (void).cxx_destruct;
- (id)rowControllerAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfRows;
- (void)setRowTypes:(id)arg1;
- (void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;

@end
