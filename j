function generateBotReply(input) {
    const low = input.toLowerCase();

    // 1. Core Services & Sign Language (Project Specific)
    if (low.includes("how it works") || low.includes("how to use") || low.includes("gesture")) {
        return "GestureTalk AI uses your camera to track hand movements. Our AI then translates those gestures into text and speech in real-time.";
    }
    if (low.includes("asl") || low.includes("language") || low.includes("alphabet")) {
        return "We currently specialize in American Sign Language (ASL). You can practice the alphabet and common phrases in our 'Learning' section.";
    }

    // 2. Technical Support (Camera & Permissions)
    if (low.includes("camera") || low.includes("not working") || low.includes("access")) {
        return "Please ensure you've allowed camera permissions in your browser. For best results, stay in a well-lit area.";
    }

    // 3. Pricing & Account (Business Logic)
    if (low.includes("price") || low.includes("cost") || low.includes("free")) {
        return "For pricing details, please check our 'Pricing' page. We offer both free and pro versions for schools and individuals.";
    }
    if (low.includes("login") || low.includes("account") || low.includes("password")) {
        return "You can log in using the 'Login' button. If you've forgotten your password, use the 'Forgot Password?' link on that page.";
    }

    // 4. Greetings & Politeness (Human Touch)
    if (low.includes("hello") || low.includes("hi") || low.includes("hey")) {
        return "Hello! I'm your GestureTalk assistant. How can I help you with sign language translation today?";
    }
    if (low.includes("thank")) {
        return "You're very welcome! I'm happy to help you bridge the communication gap.";
    }

    // 5. Navigation & Exit
    if (low.includes("home") || low.includes("exit") || low.includes("back")) {
        return "You can return to the main page by clicking the 'Home' button in the top-left corner.";
    }

    // Default Fallback (The "I don't know" response)
    return "I'm still learning! You can ask me about 'camera setup', 'how it works', or 'ASL support'.";
}
