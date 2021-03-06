/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class CalendarArrowButton, CalendarDayBannerNameView;



@interface CalendarDayBanner : UIView 
{
    CalendarArrowButton *_leftArrow;
    CalendarArrowButton *_rightArrow;
    CalendarDayBannerNameView *_nameView;
    id _delegate;
}

+ (float)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setDay:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setShowsArrows:(BOOL)arg1;
- (BOOL)isTracking;
- (void)calendarArrowButtonActivated:(id)arg1 forRepeat:(BOOL)arg2;

@end
