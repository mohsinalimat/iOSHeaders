//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UpNextWidget/CLLocationManagerDelegate-Protocol.h>

@class EKTravelEngineHypothesis, UIImage;

@interface _TtC12UpNextWidget22DetailedViewController : UIViewController <CLLocationManagerDelegate>
{
    // Error parsing type: , name: showExpandedMode
    // Error parsing type: , name: needsNewMapSnapshot
    // Error parsing type: , name: needsMapPlaceholder
    // Error parsing type: , name: lastKnownHypothesis
    // Error parsing type: , name: lastKnownMapImage
    // Error parsing type: , name: lastKnownCoordinate
    // Error parsing type: , name: detailedView
    // Error parsing type: , name: largeEventView
    // Error parsing type: , name: largeReminderView
    // Error parsing type: , name: smallElementsView
    // Error parsing type: , name: lastKnownViewWidth
    // Error parsing type: , name: timelinessAuthority
    // Error parsing type: , name: outstandingHypothesizer
    // Error parsing type: , name: outstandingSnapshotter
    // Error parsing type: , name: locationManager
}

- (CDUnknownBlockType).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)refresh:(id)arg1 events:(id)arg2 reminders:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, retain) UIImage *lastKnownMapImage; // @synthesize lastKnownMapImage;
@property(nonatomic, retain) EKTravelEngineHypothesis *lastKnownHypothesis; // @synthesize lastKnownHypothesis;
@property(nonatomic) _Bool showExpandedMode; // @synthesize showExpandedMode;

@end

