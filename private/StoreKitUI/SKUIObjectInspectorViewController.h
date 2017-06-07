//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIObjectInspector-Protocol.h>
#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>
#import <StoreKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMutableArray, NSString, UINavigationBar, UITableView, UIView, UIVisualEffectView, _SKUIInspectablePropertySection;
@protocol SKUIInspectableObject;

@interface SKUIObjectInspectorViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate, SKUIObjectInspector>
{
    id <SKUIInspectableObject> _inspectableObject;
    UIView *_contentView;
    UIVisualEffectView *_backgroundView;
    UINavigationBar *_navigationBar;
    UITableView *_tableView;
    _SKUIInspectablePropertySection *_currentSection;
    NSMutableArray *_sections;
}

+ (void)showInspectableObject:(id)arg1;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) _SKUIInspectablePropertySection *currentSection; // @synthesize currentSection=_currentSection;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <SKUIInspectableObject> inspectableObject; // @synthesize inspectableObject=_inspectableObject;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)exposePropertyWithFriendlyName:(id)arg1 value:(id)arg2;
- (void)endSection;
- (void)beginSectionWithFriendlyName:(id)arg1;
@property(copy, nonatomic) NSString *information;
@property(copy, nonatomic) NSString *friendlyName;
- (void)populate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect)calculateContentViewFrameWithParentBounds:(struct CGRect)arg1 withTraitCollection:(id)arg2;
- (void)dismiss;
- (void)showFromViewController:(id)arg1;
- (void)handleBackgroundTap:(id)arg1;
- (void)done:(id)arg1;
- (void)setupConstraints;
- (void)viewDidLoad;
- (id)initWithInspectableObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

