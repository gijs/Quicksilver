#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import <Carbon/Carbon.h>

/* Deprecated. Use [NSApp completedLaunch] */
extern BOOL QSApplicationCompletedLaunch;

@interface QSApp : NSApplication {
	BOOL isUIElement, shouldRelaunch;
	IBOutlet NSMenu *hiddenMenu;
	NSResponder *globalKeyEquivalentTarget;
	NSMutableArray *eventDelegates;
}

- (BOOL)isUIElement;
- (BOOL)setShouldBeUIElement:(BOOL)hidden; //Returns YES if successful
- (void)forwardWindowlessRightClick:(NSEvent *)theEvent;
- (BOOL)completedLaunch;
- (BOOL)isPrerelease;
- (NSResponder *)globalKeyEquivalentTarget;
- (void)setGlobalKeyEquivalentTarget:(NSResponder *)value;
- (void)addEventDelegate:(id)eDelegate;
- (void)removeEventDelegate:(id)eDelegate;
@end
